// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveEntity_HeaderFile
#define _Select3D_SensitiveEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveEntity_HeaderFile
#include <Handle_Select3D_SensitiveEntity.hxx>
#endif

#ifndef _SelectBasics_SensitiveEntity_HeaderFile
#include <SelectBasics_SensitiveEntity.hxx>
#endif
#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Select3D_Projector_HeaderFile
#include <Handle_Select3D_Projector.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class SelectBasics_EntityOwner;
class Select3D_Projector;
class TopLoc_Location;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;


//!  Abstract framework to define 3D sensitive entities. <br>
//! As the selection process uses the principle of a <br>
//! projection of 3D shapes onto a 2D view where <br>
//! nearness to a rectangle determines whether a shape <br>
//! is picked or not, all 3D shapes need to be converted <br>
//! into 2D ones in order to be selected. <br>
class Select3D_SensitiveEntity : public SelectBasics_SensitiveEntity {

public:

  //! Returns true if this framework needs conversion. <br>
        Standard_Boolean NeedsConversion() const;
  //! Returns true if this framework provides 3D information. <br>
  Standard_EXPORT     Standard_Boolean Is3D() const;
  //! In classes inheriting this framework, you must <br>
//! redefine this function in order to get a sensitive 2D <br>
//! rectangle from a 3D entity. This rectangle is the <br>
//! sensitive zone which makes the 3D entity selectable. <br>
  Standard_EXPORT   virtual  void Project(const Handle(Select3D_Projector)& aProjector)  = 0;
  //! Returns the max number of sensitive areas returned <br>
//!          by this class is 1 by default. <br>
//!          Else on must redefine this method. <br>
  Standard_EXPORT   virtual  Standard_Integer MaxBoxes() const;
  //! Originally this method intended to return sensitive <br>
//! entity with new location aLocation, but currently sensitive <br>
//! entities do not hold a location, instead HasLocation() and <br>
//! Location() methods call corresponding entity owner's methods. <br>
//! Thus all entities returned by GetConnected() share the same <br>
//! location propagated from corresponding selectable object. <br>
//! You must redefine this function for any type of <br>
//! sensitive entity which can accept another connected <br>
//! sensitive entity.//can be connected to another sensitive entity. <br>
  Standard_EXPORT   virtual  Handle_Select3D_SensitiveEntity GetConnected(const TopLoc_Location& aLocation) ;
  //! Matches the box defined by the coordinates Xmin, <br>
//! Ymin, Xmax, Ymax with the entity found at that point <br>
//! within the tolerance aTol. <br>
//! Xmin, YMin define the minimum point in the lower left <br>
//! hand corner of the box, and   XMax, YMax define the <br>
//! maximum point in the upper right hand corner of the box. <br>
//! You must redefine this function for every inheriting entity. <br>
//! You will have to call this framework inside the redefined function. <br>
  Standard_EXPORT   virtual  Standard_Boolean Matches(const Standard_Real XMin,const Standard_Real YMin,const Standard_Real XMax,const Standard_Real YMax,const Standard_Real aTol) ;
  //! prevents from hiding virtual methods... <br>
  Standard_EXPORT   virtual  Standard_Boolean Matches(const TColgp_Array1OfPnt2d& Polyline,const Bnd_Box2d& aBox,const Standard_Real aTol) ;
  //! Returns true if this framework has a location defined. <br>
  Standard_EXPORT   virtual  Standard_Boolean HasLocation() const;
  
  Standard_EXPORT   virtual const TopLoc_Location& Location() const;
  //! sets the location to Identity <br>
  Standard_EXPORT   virtual  void ResetLocation() ;
  
  Standard_EXPORT   virtual  void SetLocation(const TopLoc_Location& aLoc) ;
  //! 2 options : <br>
//!          <FullDump> = False -> general information <br>
//!	        <FullDump> = True  -> whole informtion 3D +2d ... <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S,const Standard_Boolean FullDump = Standard_True) const;
  
  Standard_EXPORT   static  void DumpBox(Standard_OStream& S,const Bnd_Box2d& abox) ;
  
  Standard_EXPORT     void UpdateLocation(const TopLoc_Location& aLoc) ;




  DEFINE_STANDARD_RTTI(Select3D_SensitiveEntity)

protected:

  
  Standard_EXPORT   Select3D_SensitiveEntity(const Handle(SelectBasics_EntityOwner)& OwnerId);



private: 




};


#include <Select3D_SensitiveEntity.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
