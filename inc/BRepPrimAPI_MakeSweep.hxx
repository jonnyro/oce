// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeSweep_HeaderFile
#define _BRepPrimAPI_MakeSweep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
class TopoDS_Shape;


//!  The abstract class MakeSweep is <br>
//! the root class of swept primitives. <br>
//! Sweeps are objects you obtain by sweeping a profile along a path. <br>
//! The profile can be any topology and the path is usually a curve or <br>
//! a wire. The profile generates objects according to the following rules: <br>
//!   -      Vertices generate Edges <br>
//!   -      Edges generate Faces. <br>
//!   -      Wires generate Shells. <br>
//!   -      Faces generate Solids. <br>
//!   -      Shells generate Composite  Solids. <br>
//!     You are not allowed to sweep Solids and Composite Solids. <br>
//! Two kinds of sweeps are implemented in the BRepPrimAPI package: <br>
//!   -      The linear sweep called a   Prism <br>
//!   -      The rotational sweep    called a Revol <br>
//!   Swept constructions along complex profiles such as BSpline curves <br>
//! are also available in the BRepOffsetAPI package.. <br>
class BRepPrimAPI_MakeSweep  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns the  TopoDS  Shape of the bottom of the sweep. <br>
  Standard_EXPORT   virtual  TopoDS_Shape FirstShape()  = 0;
  //! Returns the TopoDS Shape of the top of the sweep. <br>
  Standard_EXPORT   virtual  TopoDS_Shape LastShape()  = 0;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
