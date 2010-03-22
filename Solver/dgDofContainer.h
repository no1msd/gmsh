#ifndef _DG_DOF_CONTAINER_H_
#define _DG_DOF_CONTAINER_H_

#include <vector>
#include "fullMatrix.h"
#include "linearSystemCSR.h"
class dgGroupCollection;
class dgGroupOfElements;
class function;

class dgDofContainer {
private:
  dgDofContainer (const dgDofContainer&);  
  int _totalNbElements; 
  int _nbFields;
  dgGroupCollection &_groups;
  int _dataSizeGhost; 
  fullVector<double> * _data; // the full data itself
  fullVector<double> * _ghostData;
  //inline int getDataSize(){return _dataSize;}
  // parallel
  void buildParallelStructure();
  bool _parallelStructureExists;
  int *countSend,*countRecv,*shiftSend,*shiftRecv,*groupShiftRecv;
  double *sendBuf, *recvBuf;
  std::vector<fullMatrix<double> *> _dataProxys; // proxys 
  std::map<const dgGroupOfElements*,int> _groupId;
  std::vector<int> _groupFirstDofId;
  int _mshStep;
public:
  void scale(double f);
  inline int getDofId (int groupId, int elementId, int fieldId, int nodeId) const {
    const fullMatrix<double> &proxy = getGroupProxy(groupId);
    return _groupFirstDofId[groupId]+(elementId*_nbFields+fieldId)*proxy.size1()+nodeId;
  }
  inline int getGroupFirstDofId(int groupId) {
    return _groupFirstDofId[groupId];
  }
  inline fullVector<double> &getVector() {return *_data;}
  void scale(std::vector<dgGroupOfElements*>groups, double f);
  double norm();
  double norm(std::vector<dgGroupOfElements*>groups);
  void axpy(dgDofContainer &x, double a=1.);
  void axpy(std::vector<dgGroupOfElements*>groups,dgDofContainer &x, double a=1.);
  inline fullMatrix<double> &getGroupProxy(int gId){ return *(_dataProxys[gId]); }
  inline fullMatrix<double> *getGroupProxyBinding(int gId){ return (_dataProxys[gId]); }
  inline const fullMatrix<double> &getGroupProxy(int gId) const { return *(_dataProxys[gId]); }
  inline fullMatrix<double> &getGroupProxy(const dgGroupOfElements* g){ return *(_dataProxys[_groupId[g]]); }
  dgDofContainer (dgGroupCollection *groups, int nbFields);
  ~dgDofContainer ();  
  int getNbElements() {return _totalNbElements;}
  int getNbFields() {return _nbFields;}
  void scatter();
  void save(const std::string name);
  void load(const std::string name);
  void setAll(double v);
  void L2Projection(const function *f);
  void Mesh2Mesh_BuildL2Projection(linearSystemCSRGmm<double> &projector,dgDofContainer &donor);
  void multAddInverseMassMatrixL2Projection(linearSystemCSRGmm<double> &projector); // this method should be private
  void Mesh2Mesh_ApplyL2Projection(linearSystemCSRGmm<double> &projector,dgDofContainer &donor, int transpose, int copy);
  void exportMsh(const std::string name);
  void exportGroupIdMsh();
  void exportMultirateGroupMsh();

  static void registerBindings(binding *b);
  inline dgGroupCollection *getGroups() { return &_groups; }
};
#endif
