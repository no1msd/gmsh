// Gmsh - Copyright (C) 1997-2017 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <gmsh@onelab.info>.

#ifndef _GMSH_API_H_
#define _GMSH_API_H_

// This is the embryo of what will become the Gmsh API.
//
// Don't use it yet, it's not ready :-) We plan to release a first version in
// Gmsh 3.1, and something more complete in Gmsh 4.0.
//
// Your input is welcome: please contribute your ideas on
// https://gitlab.onelab.info/gmsh/gmsh/issues/188
//
// By design, the API is purely functional, and only uses elementary C++ types
// from the standard library. This design should not and will not change.

// All functions return 0 on successful completion.

#include <vector>
#include <string>

#if defined(WIN32)
#define GMSH_API __declspec(dllexport) int
#else
#define GMSH_API int
#endif

// Gmsh
GMSH_API gmshInitialize(int argc, char **argv);
GMSH_API gmshFinalize();
GMSH_API gmshOpen(const std::string &fileName);
GMSH_API gmshMerge(const std::string &fileName);
GMSH_API gmshExport(const std::string &fileName);
GMSH_API gmshClear();

// GmshOption
GMSH_API gmshOptionSetNumber(const std::string &name, double value);
GMSH_API gmshOptionGetNumber(const std::string &name, double &value);
GMSH_API gmshOptionSetString(const std::string &name, const std::string &value);
GMSH_API gmshOptionGetString(const std::string &name, std::string &value);

// GmshModel
GMSH_API gmshModelCreate(const std::string &name);
GMSH_API gmshModelSetCurrent(const std::string &name);
GMSH_API gmshModelDestroy();
GMSH_API gmshModelMesh(int dim);
GMSH_API gmshModelGetElementaryTags(int dim, std::vector<int> &tags);
GMSH_API gmshModelGetPhysicalTags(int dim, std::vector<int> &tags);
GMSH_API gmshModelSetPhysicalGroup(int dim, int tag, const std::vector<int> &tags);
GMSH_API gmshModelGetPhysicalGroup(int dim, int tag, std::vector<int> &tags);
GMSH_API gmshModelSetPhysicalName(int dim, int tag, const std::string &name);
GMSH_API gmshModelGetPhysicalName(int dim, int tag, std::string &name);
GMSH_API gmshModelGetVertexCoordinates(int tag, double &x, std::vector<double> &coord);
GMSH_API gmshModelGetMeshVertices(int dim, int tag, std::vector<int> &vertexTags,
                                  std::vector<double> &coords,
                                  std::vector<double> &parametricCoords);
GMSH_API gmshModelGetMeshElements(int dim, int tag, std::vector<int> &types,
                                  std::vector<std::vector<int> > &elementTags,
                                  std::vector<std::vector<int> > &vertexTags);
GMSH_API gmshModelGetBoundaryTags(const std::vector<std::pair<int, int> > &inDimTags,
                                  std::vector<std::pair<int, int> > &outDimTags,
                                  bool combined, bool oriented, bool recursive);
GMSH_API gmshModelSetMeshSize(int dim, int tag, double size);
GMSH_API gmshModelSetCompoundMesh(int dim, const std::vector<int> &tags);
GMSH_API gmshModelSetTransfiniteLine(int tag, int nPoints, int type, double coef);
GMSH_API gmshModelSetTransfiniteSurface(int tag, int arrangement,
                                        const std::vector<int> &cornerTags);
GMSH_API gmshModelSetTransfiniteVolume(int tag, const std::vector<int> &cornerTags);
GMSH_API gmshModelSetRecombine(int dim, int tag, double angle);
GMSH_API gmshModelSetSmoothing(int tag, int val);
GMSH_API gmshModelSetReverseMesh(int dim, int tag);
GMSH_API gmshModelAddEmbeddedVertex(int tag, int inDim, int inTag);

// GmshModelGeo
GMSH_API gmshModelGeoAddVertex(int &tag, double x, double y, double z, double lc);
GMSH_API gmshModelGeoAddLine(int &tag, int startTag, int endTag);
GMSH_API gmshModelGeoAddCircleArc(int &tag, int startTag, int centerTag, int EndTag,
                                  double nx=0., double ny=0., double nz=0.);
GMSH_API gmshModelGeoAddEllipseArc(int &tag, int startTag, int centerTag, int majorTag,
                                   int endTag, double nx=0., double ny=0., double nz=0.);
GMSH_API gmshModelGeoAddSpline(int &tag, const std::vector<int> &vertexTags);
GMSH_API gmshModelGeoAddBSpline(int &tag, const std::vector<int> &vertexTags);
GMSH_API gmshModelGeoAddBezier(int &tag, const std::vector<int> &vertexTags);
GMSH_API gmshModelGeoAddNurbs(int &tag, const std::vector<int> &vertexTags,
                              const std::vector<double> &knots);
GMSH_API gmshModelGeoAddLineLoop(int &tag, const std::vector<int> &edgeTags);
GMSH_API gmshModelGeoAddPlaneSurface(int &tag, const std::vector<int> &wireTags);
GMSH_API gmshModelGeoAddDiscreteSurface(int &tag);
GMSH_API gmshModelGeoAddSurfaceFilling(int &tag, const std::vector<int> &wireTags,
                                       int sphereCenterTag=-1);
GMSH_API gmshModelGeoAddSurfaceLoop(int &tag, const std::vector<int> &faceTags);
GMSH_API gmshModelGeoAddVolume(int &tag, const std::vector<int> &shellTags);
GMSH_API gmshModelGeoExtrude(const std::vector<std::pair<int, int> > &inDimTags,
                             double dx, double dy, double dz,
                             std::vector<std::pair<int, int> > &outDimTags,
                             const std::vector<int> &numElements,
                             const std::vector<double> &heights, bool recombine);
GMSH_API gmshModelGeoRevolve(const std::vector<std::pair<int, int> > &inDimTags,
                             double x, double y, double z,
                             double ax, double ay, double az, double angle,
                             std::vector<std::pair<int, int> > &outDimTags,
                             const std::vector<int> &numElements,
                             const std::vector<double> &heights, bool recombine);
GMSH_API gmshModelGeoTwist(const std::vector<std::pair<int, int> > &inDimTags,
                           double x, double y, double z,
                           double dx, double dy, double dz,
                           double ax, double ay, double az, double angle,
                           std::vector<std::pair<int, int> > &outDimTags,
                           const std::vector<int> &numElements,
                           const std::vector<double> &heights, bool recombine);
GMSH_API gmshModelGeoTranslate(const std::vector<std::pair<int, int> > &dimTags,
                               double dx, double dy, double dz);
GMSH_API gmshModelGeoRotate(const std::vector<std::pair<int, int> > &dimTags,
                            double x, double y, double z, double ax, double ay, double az,
                            double angle);
GMSH_API gmshModelGeoDilate(const std::vector<std::pair<int, int> > &dimTags,
                            double x, double y, double z,
                            double a, double b, double c);
GMSH_API gmshModelGeoSymmetry(const std::vector<std::pair<int, int> > &dimTags,
                              double a, double b, double c, double d);
GMSH_API gmshModelGeoCopy(const std::vector<std::pair<int, int> > &inDimTags,
                          std::vector<std::pair<int, int> > &outDimTags);
GMSH_API gmshModelGeoRemove(const std::vector<std::pair<int, int> > &dimTags,
                            bool recursive=false);
GMSH_API gmshModelGeoRemoveAllDuplicates();
GMSH_API gmshModelGeoSynchronize();

// GmshModelOCC
GMSH_API gmshModelOCCAddVertex(int &tag, double x, double y, double z, double lc);
GMSH_API gmshModelOCCAddLine(int &tag, int startVertexTag, int endVertexTag);
GMSH_API gmshModelOCCExtrude(const std::vector<std::pair<int, int> > &inDimTag,
                             double dx, double dy, double dz,
                             std::vector<std::pair<int, int> > &outDimTags);
GMSH_API gmshModelOCCRemoveAllDuplicates();
GMSH_API gmshModelOCCSynchronize();

// GmshSolver

// GmshPost

// GmshPlugin

#endif
