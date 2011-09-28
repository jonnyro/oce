// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_PacketList_HeaderFile
#define _IFSelect_PacketList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_PacketList_HeaderFile
#include <Handle_IFSelect_PacketList.hxx>
#endif

#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _Interface_IntList_HeaderFile
#include <Interface_IntList.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
class Interface_InterfaceModel;
class Interface_InterfaceError;
class Standard_Transient;
class TColStd_HSequenceOfTransient;
class Interface_EntityIterator;


//! This class gives a simple way to return then consult a <br>
//!           list of packets, determined from the content of a Model, <br>
//!           by various criteria. <br>
//! <br>
//!           It allows to describe several lists with entities from a <br>
//!           given model, possibly more than one list knowing every entity, <br>
//!           and to determine the remaining list (entities in no lists) and <br>
//!           the duplications (with their count). <br>
class IFSelect_PacketList : public MMgt_TShared {

public:

  //! Creates a PackList, empty, ready to receive entities from a <br>
//!           given Model <br>
  Standard_EXPORT   IFSelect_PacketList(const Handle(Interface_InterfaceModel)& model);
  //! Sets a name to a packet list : this makes easier a general <br>
//!           routine to print it. Default is "Packets" <br>
  Standard_EXPORT     void SetName(const Standard_CString name) ;
  //! Returns the recorded name for a packet list <br>
  Standard_EXPORT     Standard_CString Name() const;
  //! Returns the Model of reference <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel Model() const;
  //! Declares a new Packet, ready to be filled <br>
//!           The entities to be added will be added to this Packet <br>
  Standard_EXPORT     void AddPacket() ;
  //! Adds an entity from the Model into the current packet for Add <br>
  Standard_EXPORT     void Add(const Handle(Standard_Transient)& ent) ;
  //! Adds an list of entities into the current packet for Add <br>
  Standard_EXPORT     void AddList(const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Returns the count of non-empty packets <br>
  Standard_EXPORT     Standard_Integer NbPackets() const;
  //! Returns the count of entities in a Packet given its rank, or 0 <br>
  Standard_EXPORT     Standard_Integer NbEntities(const Standard_Integer numpack) const;
  //! Returns the content of a Packet given its rank <br>
//!           Null Handle if <numpack> is out of range <br>
  Standard_EXPORT     Interface_EntityIterator Entities(const Standard_Integer numpack) const;
  //! Returns the highest number of packets which know a same entity <br>
//!           For no duplication, should be one <br>
  Standard_EXPORT     Standard_Integer HighestDuplicationCount() const;
  //! Returns the count of entities duplicated : <br>
//!           <count> times, if <andmore> is False, or <br>
//!           <count> or more times, if <andmore> is True <br>
//!           See Duplicated for more details <br>
  Standard_EXPORT     Standard_Integer NbDuplicated(const Standard_Integer count,const Standard_Boolean andmore) const;
  //! Returns a list of entities duplicated : <br>
//!           <count> times, if <andmore> is False, or <br>
//!           <count> or more times, if <andmore> is True <br>
//!           Hence, count=2 & andmore=True gives all duplicated entities <br>
//!           count=1 gives non-duplicated entities (in only one packet) <br>
//!           count=0 gives remaining entities (in no packet at all) <br>
  Standard_EXPORT     Interface_EntityIterator Duplicated(const Standard_Integer count,const Standard_Boolean andmore) const;




  DEFINE_STANDARD_RTTI(IFSelect_PacketList)

protected:




private: 


Handle_Interface_InterfaceModel themodel;
TColStd_Array1OfInteger thedupls;
Interface_IntList thepacks;
TColStd_Array1OfInteger theflags;
Standard_Integer thelast;
Standard_Boolean thebegin;
TCollection_AsciiString thename;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif