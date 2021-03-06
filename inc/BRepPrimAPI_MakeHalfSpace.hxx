// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeHalfSpace_HeaderFile
#define _BRepPrimAPI_MakeHalfSpace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Solid_HeaderFile
#include <TopoDS_Solid.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
class StdFail_NotDone;
class TopoDS_Face;
class gp_Pnt;
class TopoDS_Shell;
class TopoDS_Solid;


//! Describes functions to build half-spaces. <br>
//! A half-space is an infinite solid, limited by a surface. It <br>
//! is built from a face or a shell, which bounds it, and with <br>
//! a reference point, which specifies the side of the <br>
//! surface where the matter of the half-space is located. <br>
//! A half-space is a tool commonly used in topological <br>
//! operations to cut another shape. <br>
//! A MakeHalfSpace object provides a framework for: <br>
//! -   defining and implementing the construction of a half-space, and <br>
//! -   consulting the result. <br>
class BRepPrimAPI_MakeHalfSpace  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Make a HalfSpace defined with a Face and a Point. <br>
  Standard_EXPORT   BRepPrimAPI_MakeHalfSpace(const TopoDS_Face& Face,const gp_Pnt& RefPnt);
  //! Make a HalfSpace defined with a Shell and a Point. <br>
  Standard_EXPORT   BRepPrimAPI_MakeHalfSpace(const TopoDS_Shell& Shell,const gp_Pnt& RefPnt);
  //! Returns the constructed half-space as a solid. <br>
  Standard_EXPORT    const TopoDS_Solid& Solid() const;
Standard_EXPORT operator TopoDS_Solid() const;





protected:





private:



TopoDS_Solid mySolid;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
