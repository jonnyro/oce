// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeConic2d_HeaderFile
#define _StepToGeom_MakeConic2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_Conic_HeaderFile
#include <Handle_StepGeom_Conic.hxx>
#endif
#ifndef _Handle_Geom2d_Conic_HeaderFile
#include <Handle_Geom2d_Conic.hxx>
#endif
class StepGeom_Conic;
class Geom2d_Conic;


//! This class implements the mapping between classes <br>
//!          Conic from StepGeom <br>
//!          which describes a Conic from prostep and Conic from Geom2d. <br>
//!          As Conic is an abstract class <br>
//!          this class is an access to the sub-class required. <br>
class StepToGeom_MakeConic2d  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Conic)& SC,Handle(Geom2d_Conic)& CC) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
