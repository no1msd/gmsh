#include <stdlib.h>
#include <stdio.h>
#include <list>
#include "o_internals.h"
#include "Octree.h"

using std::list;

void free_buckets(octantBucket *);

Octree* Octree_Create (int maxElements, double origin[3], double size[3],   
                       void  (*BB)(void *, double*, double*),
                       void  (*Centroid)(void *, double *),
                       int   (*InEle)(void *, double *))
{
  Octree *myOctree = new Octree;
  initializeOctantBuckets (origin, size, maxElements,
                           &(myOctree->root), &(myOctree->info));  	
  myOctree->function_BB = BB;
  myOctree->function_centroid = Centroid;
  myOctree->function_inElement = InEle;
  return myOctree;
}


void Octree_Delete(Octree *myOctree)
{
  delete myOctree->info;
  free_buckets(myOctree->root);
  delete myOctree->root;
  return;
}

void Octree_Insert(void * element, Octree *myOctree)
{
  double minBB[3], maxBB[3], centroid[3];
  octantBucket *bucket;
  (*(myOctree->function_BB))(element, minBB, maxBB);
  (*(myOctree->function_centroid))(element, centroid);

// for test 
/* printf("The centroid of the insert element is %f, %f, %f\n",centroid[0], centroid[1], centroid[2]); */
//end of test

  bucket = findElementBucket(myOctree->root, centroid);
  addElement2Bucket (bucket, element, minBB, maxBB,
                            centroid,myOctree->info);	
   // printf("Ready to return from Octree_Insert\n");
  return;
}

void Octree_Arrange(Octree *myOctree)
{  
  std::list<void *>::iterator iter;
  double minPt[3], maxPt[3];
  for(iter = myOctree->info->listAllElements.begin(); iter!= 
      myOctree->info->listAllElements.end(); iter++) {
    (*(myOctree->function_BB))(*iter, minPt, maxPt);
    insertOneBB(*iter, minPt, maxPt, myOctree->root);
  }
  myOctree->info->listAllElements.clear();
  return;
}   




void * Octree_Search(double *pt, Octree *myOctree)
{
  return searchElement(myOctree->root, pt, myOctree->info, 
		       myOctree->function_BB, myOctree->function_inElement);
}


void free_buckets(octantBucket * bucket)
{
  int i, numBuck = 8;
  ELink ptr1, ptr2;

  if(bucket->next == NULL) {
    ptr1 = bucket->lhead;
    while(ptr1 != NULL) {
      ptr2 = ptr1;
      ptr1 = ptr1->next;
      delete ptr2;
    }
    bucket->listBB.clear(); 
    return;
  }

  for(i = numBuck-1; i >= 0; i--) 
    free_buckets((bucket->next)+i);	    
  delete []bucket->next;
  return;
}


void  Octree_SearchAll (double * pt, Octree * myOctree, list<void *> * output)
{
  searchAllElements(myOctree->root, pt, myOctree->info, myOctree->function_BB,
                    myOctree->function_inElement, output);	
}
