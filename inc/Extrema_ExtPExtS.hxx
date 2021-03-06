// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ExtPExtS_HeaderFile
#define _Extrema_ExtPExtS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Extrema_FuncExtPS_HeaderFile
#include <Extrema_FuncExtPS.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Adaptor3d_SurfacePtr_HeaderFile
#include <Adaptor3d_SurfacePtr.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Ax2_HeaderFile
#include <gp_Ax2.hxx>
#endif
#ifndef _Extrema_GenExtPS_HeaderFile
#include <Extrema_GenExtPS.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Extrema_POnSurf_HeaderFile
#include <Extrema_POnSurf.hxx>
#endif
class Adaptor3d_HCurve;
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Pnt;
class Adaptor3d_SurfaceOfLinearExtrusion;
class Extrema_POnSurf;
class gp_Ax2;


//! It calculates all the extremum (minimum and <br>
//!          maximum) distances between a point and a linear <br>
//!          extrusion surface. <br>
class Extrema_ExtPExtS  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_ExtPExtS();
  //! It calculates all the distances between a point <br>
//!          from gp and a Surface. <br>
  Standard_EXPORT   Extrema_ExtPExtS(const gp_Pnt& P,const Adaptor3d_SurfaceOfLinearExtrusion& S,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real Vmin,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV);
  //! It calculates all the distances between a point <br>
//!          from gp and a Surface. <br>
  Standard_EXPORT   Extrema_ExtPExtS(const gp_Pnt& P,const Adaptor3d_SurfaceOfLinearExtrusion& S,const Standard_Real TolU,const Standard_Real TolV);
  //! Initializes the fields of the algorithm. <br>
  Standard_EXPORT     void Initialize(const Adaptor3d_SurfaceOfLinearExtrusion& S,const Standard_Real Uinf,const Standard_Real Usup,const Standard_Real Vinf,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV) ;
  
  Standard_EXPORT     void Perform(const gp_Pnt& P) ;
  //! Returns True if the distances are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Returns the value of the Nth resulting square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Returns the point of the Nth resulting distance. <br>
  Standard_EXPORT    const Extrema_POnSurf& Point(const Standard_Integer N) const;





protected:





private:

  
  Standard_EXPORT     void MakePreciser(Standard_Real& U,const gp_Pnt& P,const Standard_Boolean isMin,const gp_Ax2& OrtogSection) const;


Standard_Real myuinf;
Standard_Real myusup;
Standard_Real mytolu;
Standard_Real myvinf;
Standard_Real myvsup;
Standard_Real mytolv;
Extrema_FuncExtPS myF;
Handle_Adaptor3d_HCurve myC;
Adaptor3d_SurfacePtr myS;
gp_Vec myDirection;
gp_Ax2 myPosition;
Extrema_GenExtPS myExtPS;
Standard_Boolean myIsAnalyticallyComputable;
Standard_Boolean myDone;
Standard_Integer myNbExt;
Standard_Real mySqDist[4];
Extrema_POnSurf myPoint[4];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
