// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_Box2d_HeaderFile
#define _Bnd_Box2d_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class gp_Pnt2d;
class gp_Dir2d;
class gp_Trsf2d;


//! Describes a bounding box in 2D space. <br>
//! A bounding box is parallel to the axes of the coordinates <br>
//! system. If it is finite, it is defined by the two intervals: <br>
//! -   [ Xmin,Xmax ], and <br>
//! -   [ Ymin,Ymax ]. <br>
//! A bounding box may be infinite (i.e. open) in one or more <br>
//! directions. It is said to be: <br>
//! -   OpenXmin if it is infinite on the negative side of the   "X Direction"; <br>
//! -   OpenXmax if it is infinite on the positive side of the   "X Direction"; <br>
//! -   OpenYmin if it is infinite on the negative side of the   "Y Direction"; <br>
//! -   OpenYmax if it is infinite on the positive side of the   "Y Direction"; <br>
//! -   WholeSpace if it is infinite in all four directions. In <br>
//!   this case, any point of the space is inside the box; <br>
//! -   Void if it is empty. In this case, there is no point included in the box. <br>
//!  A bounding box is defined by four bounds (Xmin, Xmax, Ymin and Ymax) which <br>
//!   limit the bounding box if it is finite, six flags (OpenXmin, OpenXmax, OpenYmin, <br>
//!   OpenYmax, WholeSpace and Void) which describe the bounding box if it is infinite or empty, and <br>
//! -   a gap, which is included on both sides in any direction when consulting the finite bounds of the box. <br>
class Bnd_Box2d  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an empty 2D bounding box. <br>
//! The constructed box is qualified Void. Its gap is null. <br>
      Bnd_Box2d();
  //! Sets this bounding box so that it covers the whole 2D <br>
//! space, i.e. it is infinite in all directions. <br>
        void SetWhole() ;
  //! Sets this 2D bounding box so that it is empty. All points are outside a void box. <br>
        void SetVoid() ;
  //! Sets this 2D bounding box so that it bounds <br>
//!   the point P. This involves first setting this bounding box <br>
//!   to be void and then adding the point PThe rectangle bounds   the  point <P>. <br>
        void Set(const gp_Pnt2d& P) ;
  //! Sets this 2D bounding box so that it bounds <br>
//! the half-line defined by point P and direction D, i.e. all <br>
//!   points M defined by M=P+u*D, where u is greater than <br>
//!   or equal to 0, are inside the bounding area. This involves <br>
//!   first setting this 2D box to be void and then adding the   half-line. <br>
        void Set(const gp_Pnt2d& P,const gp_Dir2d& D) ;
  //! Enlarges this 2D bounding box, if required, so that it <br>
//!          contains at least: <br>
//!   -   interval [ aXmin,aXmax ] in the "X Direction", <br>
//!   -   interval [ aYmin,aYmax ] in the "Y Direction" <br>
  Standard_EXPORT     void Update(const Standard_Real aXmin,const Standard_Real aYmin,const Standard_Real aXmax,const Standard_Real aYmax) ;
  //!    Adds a point of coordinates (X,Y) to this bounding box. <br>
  Standard_EXPORT     void Update(const Standard_Real X,const Standard_Real Y) ;
  //! Returns the gap of this 2D bounding box. <br>
        Standard_Real GetGap() const;
  //! Set the gap of this 2D bounding box to abs(Tol). <br>
        void SetGap(const Standard_Real Tol) ;
  //! Enlarges     the  box  with    a  tolerance  value. <br>
//!   This means that the minimum values of its X and Y <br>
//! intervals of definition, when they are finite, are reduced by <br>
//! the absolute value of Tol, while the maximum values are <br>
//! increased by the same amount. <br>
        void Enlarge(const Standard_Real Tol) ;
  //! Returns the bounds of this 2D bounding box. <br>
//! The gap is included. If this bounding box is infinite (i.e. "open"), returned values <br>
//! may be equal to +/- Precision::Infinite(). <br>
//! if IsVoid() <br>
  Standard_EXPORT     void Get(Standard_Real& aXmin,Standard_Real& aYmin,Standard_Real& aXmax,Standard_Real& aYmax) const;
  //! The Box will be infinitely long in the Xmin direction. <br>
        void OpenXmin() ;
  //! The Box will be infinitely long in the Xmax direction. <br>
        void OpenXmax() ;
  //! The Box will be infinitely long in the Ymin direction. <br>
        void OpenYmin() ;
  //! The Box will be infinitely long in the Ymax direction. <br>
        void OpenYmax() ;
  //! Returns true if this bounding box is open in the Xmin direction. <br>
        Standard_Boolean IsOpenXmin() const;
  //! Returns true if this bounding box is open in the Xmax direction. <br>
        Standard_Boolean IsOpenXmax() const;
  //! Returns true if this bounding box is open in the Ymin direction. <br>
        Standard_Boolean IsOpenYmin() const;
  //! Returns true if this bounding box is open in the Ymax direction. <br>
        Standard_Boolean IsOpenYmax() const;
  
//! Returns true if this bounding box is infinite in all 4 <br>
//! directions (Whole Space flag). <br>
        Standard_Boolean IsWhole() const;
  
//! Returns true if this 2D bounding box is empty (Void flag). <br>
        Standard_Boolean IsVoid() const;
  //! Returns a bounding box which is the result of applying the <br>
//! transformation T to this bounding box. <br>
//! Warning <br>
//! Applying a geometric transformation (for example, a <br>
//! rotation) to a bounding box generally increases its <br>
//! dimensions. This is not optimal for algorithms which use it. <br>
  Standard_EXPORT     Bnd_Box2d Transformed(const gp_Trsf2d& T) const;
  //! Adds the 2d box <Other> to <me>. <br>
  Standard_EXPORT     void Add(const Bnd_Box2d& Other) ;
  //! Adds  the 2d pnt <P> to <me>. <br>
        void Add(const gp_Pnt2d& P) ;
  //! Extends <me> from the Pnt <P> in the direction <D>. <br>
        void Add(const gp_Pnt2d& P,const gp_Dir2d& D) ;
  //! Extends the Box  in the given Direction, i.e. adds <br>
//!          a half-line. The box may become infinite in 1 or 2 <br>
//!          directions. <br>
  Standard_EXPORT     void Add(const gp_Dir2d& D) ;
  //! Returns True if the 2d pnt <P> is out <me>. <br>
  Standard_EXPORT     Standard_Boolean IsOut(const gp_Pnt2d& P) const;
  //! Returns True if <Box2d> is out <me>. <br>
  Standard_EXPORT     Standard_Boolean IsOut(const Bnd_Box2d& Other) const;
  //! Returns True if transformed <Box2d> is out <me>. <br>
        Standard_Boolean IsOut(const Bnd_Box2d& Other,const gp_Trsf2d& T) const;
  //! Compares  a transformed  bounding with  a    transformed <br>
//!          bounding. The default implementation is  to make a copy <br>
//!          of <me> and <Other>, to transform them and to test. <br>
        Standard_Boolean IsOut(const gp_Trsf2d& T1,const Bnd_Box2d& Other,const gp_Trsf2d& T2) const;
  
  Standard_EXPORT     void Dump() const;
  //! Computes the squared diagonal of me. <br>
        Standard_Real SquareExtent() const;





protected:





private:



Standard_Real Xmin;
Standard_Real Xmax;
Standard_Real Ymin;
Standard_Real Ymax;
Standard_Real Gap;
Standard_Integer Flags;


};


#include <Bnd_Box2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
