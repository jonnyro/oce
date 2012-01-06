// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DiameterDimension_HeaderFile
#define _IGESDimen_DiameterDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_DiameterDimension_HeaderFile
#include <Handle_IGESDimen_DiameterDimension.hxx>
#endif

#ifndef _Handle_IGESDimen_GeneralNote_HeaderFile
#include <Handle_IGESDimen_GeneralNote.hxx>
#endif
#ifndef _Handle_IGESDimen_LeaderArrow_HeaderFile
#include <Handle_IGESDimen_LeaderArrow.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESDimen_GeneralNote;
class IGESDimen_LeaderArrow;
class gp_XY;
class gp_Pnt2d;


//! defines DiameterDimension, Type <206> Form <0> <br>
//!          in package IGESDimen <br>
//!          Used for dimensioning diameters <br>
class IGESDimen_DiameterDimension : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_DiameterDimension();
  //! This method is used to set the fields of the class <br>
//!           DiameterDimension <br>
//!       - aNote         : General Note Entity <br>
//!       - aLeader       : First Leader Entity <br>
//!       - anotherLeader : Second Leader Entity or a Null Handle. <br>
//!       - aCenter       : Arc center coordinates <br>
  Standard_EXPORT     void Init(const Handle(IGESDimen_GeneralNote)& aNote,const Handle(IGESDimen_LeaderArrow)& aLeader,const Handle(IGESDimen_LeaderArrow)& anotherLeader,const gp_XY& aCenter) ;
  //! returns the General Note Entity <br>
  Standard_EXPORT     Handle_IGESDimen_GeneralNote Note() const;
  //! returns the First Leader Entity <br>
  Standard_EXPORT     Handle_IGESDimen_LeaderArrow FirstLeader() const;
  //! returns False if theSecondleader is a Null Handle. <br>
  Standard_EXPORT     Standard_Boolean HasSecondLeader() const;
  //! returns the Second Leader Entity <br>
  Standard_EXPORT     Handle_IGESDimen_LeaderArrow SecondLeader() const;
  //! returns the Arc Center co-ordinates as Pnt2d from package gp <br>
  Standard_EXPORT     gp_Pnt2d Center() const;
  //! returns the Arc Center co-ordinates as Pnt2d from package gp <br>
//! after Transformation. (Z = 0.0 for Transformation) <br>
  Standard_EXPORT     gp_Pnt2d TransformedCenter() const;




  DEFINE_STANDARD_RTTI(IGESDimen_DiameterDimension)

protected:




private: 


Handle_IGESDimen_GeneralNote theNote;
Handle_IGESDimen_LeaderArrow theFirstLeader;
Handle_IGESDimen_LeaderArrow theSecondLeader;
gp_XY theCenter;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif