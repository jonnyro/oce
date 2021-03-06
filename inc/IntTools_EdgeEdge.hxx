// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_EdgeEdge_HeaderFile
#define _IntTools_EdgeEdge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _BRepAdaptor_Curve_HeaderFile
#include <BRepAdaptor_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntTools_Range_HeaderFile
#include <IntTools_Range.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IntTools_SequenceOfCommonPrts_HeaderFile
#include <IntTools_SequenceOfCommonPrts.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class Geom_Curve;
class TopoDS_Edge;
class IntTools_Range;
class IntTools_SequenceOfRanges;
class BRepAdaptor_Curve;
class Bnd_Box;
class IntTools_SequenceOfCommonPrts;



//! The class provides Edge/Edge intersection algorithm <br>
//! based on the intersection between edges bounding boxes. <br>
class IntTools_EdgeEdge  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty contructor <br>
      IntTools_EdgeEdge();
~IntTools_EdgeEdge();
  
//! Contructor <br>
      IntTools_EdgeEdge(const TopoDS_Edge& theEdge1,const TopoDS_Edge& theEdge2);
  
//! Contructor <br>
      IntTools_EdgeEdge(const TopoDS_Edge& theEdge1,const Standard_Real aT11,const Standard_Real aT12,const TopoDS_Edge& theEdge2,const Standard_Real aT21,const Standard_Real aT22);
  
//! Sets the first edge <br>
        void SetEdge1(const TopoDS_Edge& theEdge) ;
  
//! Sets the first edge and its range <br>
        void SetEdge1(const TopoDS_Edge& theEdge,const Standard_Real aT1,const Standard_Real aT2) ;
  
//! Sets the range for the first edge <br>
        void SetRange1(const IntTools_Range& theRange1) ;
  
//! Sets the range for the first edge <br>
        void SetRange1(const Standard_Real aT1,const Standard_Real aT2) ;
  
//! Sets the second edge <br>
        void SetEdge2(const TopoDS_Edge& theEdge) ;
  
//! Sets the first edge and its range <br>
        void SetEdge2(const TopoDS_Edge& theEdge,const Standard_Real aT1,const Standard_Real aT2) ;
  
//! Sets the range for the second edge <br>
        void SetRange2(const IntTools_Range& theRange) ;
  
//! Sets the range for the second edge <br>
        void SetRange2(const Standard_Real aT1,const Standard_Real aT2) ;
  
//! Performs the intersection between edges <br>
  Standard_EXPORT     void Perform() ;
  
//! Returns TRUE if common part(s) is(are) found <br>
        Standard_Boolean IsDone() const;
  
//! Returns common parts <br>
       const IntTools_SequenceOfCommonPrts& CommonParts() const;





protected:

  
//! Checks the data <br>
        void CheckData() ;
  
//! Prepares the data <br>
  Standard_EXPORT     void Prepare() ;
  
//! Computes Line/Line intersection. <br>
  Standard_EXPORT     void ComputeLineLine() ;
  
//! Looking for the exact intersection ranges <br>
  Standard_EXPORT     void FindSolutions(const IntTools_Range& theR1,const IntTools_Range& theR2,IntTools_SequenceOfRanges& theRanges1,IntTools_SequenceOfRanges& theRanges2) ;
  
//! Merges found solutions <br>
  Standard_EXPORT     void MergeSolutions(const IntTools_SequenceOfRanges& theRanges1,const IntTools_SequenceOfRanges& theRanges2) ;
  
//! Looking for the range of the edge whick is in the box <br>
  Standard_EXPORT   static  Standard_Boolean FindParameters(const BRepAdaptor_Curve& theBAC,const Standard_Real aT1,const Standard_Real aT2,const Standard_Real theRes,const Standard_Real thePTol,const Bnd_Box& theCBox,Standard_Real& aTB1,Standard_Real& aTB2) ;
  
//! Checks if edges coincide on the ranges <br>
  Standard_EXPORT     Standard_Integer CheckCoincidence(const Standard_Real aT11,const Standard_Real aT12,const Standard_Real aT21,const Standard_Real aT22,const Standard_Real theCriteria,const Standard_Real theCurveRes1) ;
  
//! Adds common part of the given type to myCommonParts <br>
  Standard_EXPORT     void AddSolution(const Standard_Real aT11,const Standard_Real aT12,const Standard_Real aT21,const Standard_Real aT22,const TopAbs_ShapeEnum theType) ;
  
//! Looking for the minimal distance between edges on the ranges <br>
  Standard_EXPORT     void FindBestSolution(const Standard_Real aT11,const Standard_Real aT12,const Standard_Real aT21,const Standard_Real aT22,Standard_Real& aT1,Standard_Real& aT2) ;
  
//! Checks is there an intersection between edges on the given ranges <br>
//! (for nearly conicident edges) <br>
  Standard_EXPORT     Standard_Boolean IsIntersection(const Standard_Real aT11,const Standard_Real aT12,const Standard_Real aT21,const Standard_Real aT22) ;


TopoDS_Edge myEdge1;
TopoDS_Edge myEdge2;
Handle_Geom_Curve myGeom1;
Handle_Geom_Curve myGeom2;
BRepAdaptor_Curve myCurve1;
BRepAdaptor_Curve myCurve2;
Standard_Real myTol1;
Standard_Real myTol2;
Standard_Real myTol;
Standard_Real myRes1;
Standard_Real myRes2;
Standard_Real myPTol1;
Standard_Real myPTol2;
IntTools_Range myRange1;
IntTools_Range myRange2;
Standard_Boolean mySwap;
Standard_Integer myErrorStatus;
IntTools_SequenceOfCommonPrts myCommonParts;


private:





};


#include <IntTools_EdgeEdge.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
