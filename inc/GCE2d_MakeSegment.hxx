// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeSegment_HeaderFile
#define _GCE2d_MakeSegment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_TrimmedCurve_HeaderFile
#include <Handle_Geom2d_TrimmedCurve.hxx>
#endif
#ifndef _GCE2d_Root_HeaderFile
#include <GCE2d_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom2d_TrimmedCurve;
class StdFail_NotDone;
class gp_Pnt2d;
class gp_Dir2d;
class gp_Lin2d;


//! Implements construction algorithms for a line <br>
//! segment in the plane. The result is a <br>
//! Geom2d_TrimmedCurve curve. <br>
//! A MakeSegment object provides a framework for: <br>
//! -   defining the construction of the line segment, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the Value <br>
//!   function returns the constructed line segment. <br>
class GCE2d_MakeSegment  : public GCE2d_Root {
public:

  DEFINE_STANDARD_ALLOC

  //! Make a segment of Line from the 2 points <P1> and <P2>. <br>
//!          Status is "ConfusedPoints" if <P1> and <P2> are confused. <br>
  Standard_EXPORT   GCE2d_MakeSegment(const gp_Pnt2d& P1,const gp_Pnt2d& P2);
  //! Make a segment of Line from the point <P1> with <br>
//!          the direction <P> and ended by the projection of <br>
//!          <P2> on the line <P1,V>. <br>
//!          Status is "ConfusedPoints" if <P1> and <P2> are confused. <br>
  Standard_EXPORT   GCE2d_MakeSegment(const gp_Pnt2d& P1,const gp_Dir2d& V,const gp_Pnt2d& P2);
  //! Make a segment of Line from the line <Line> <br>
//!          between the two parameters U1 and U2. <br>
//!          Status is "SameParamters" if <U1> is equal <U2>. <br>
  Standard_EXPORT   GCE2d_MakeSegment(const gp_Lin2d& Line,const Standard_Real U1,const Standard_Real U2);
  //! Make a segment of Line from the line <Line> <br>
//!          between the point <Point> and the parameter Ulast. <br>
//!          It returns NullObject if <U1> is equal <U2>. <br>
  Standard_EXPORT   GCE2d_MakeSegment(const gp_Lin2d& Line,const gp_Pnt2d& Point,const Standard_Real Ulast);
  //! Make a segment of Line from the line <Line> <br>
//!          between the two points <P1> and <P2>. <br>
//!          It returns NullObject if <P1> and <P2> are confused. <br>
//! Warning <br>
//! If the points which limit the segment are coincident <br>
//! for given points or for the projection of given points <br>
//! on the line which supports the line segment (that is, <br>
//! when IsDone returns false), the Status function <br>
//! returns gce_ConfusedPoints. This warning only <br>
//! concerns the first two constructors. <br>
  Standard_EXPORT   GCE2d_MakeSegment(const gp_Lin2d& Line,const gp_Pnt2d& P1,const gp_Pnt2d& P2);
  //! Returns the constructed line segment. <br>
//! Exceptions StdFail_NotDone if no line segment is constructed. <br>
  Standard_EXPORT    const Handle_Geom2d_TrimmedCurve& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_TrimmedCurve& Operator() const;
Standard_EXPORT operator Handle_Geom2d_TrimmedCurve() const;





protected:





private:



Handle_Geom2d_TrimmedCurve TheSegment;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
