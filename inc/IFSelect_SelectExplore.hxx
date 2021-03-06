// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectExplore_HeaderFile
#define _IFSelect_SelectExplore_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectExplore_HeaderFile
#include <Handle_IFSelect_SelectExplore.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IFSelect_SelectDeduct_HeaderFile
#include <IFSelect_SelectDeduct.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class TCollection_AsciiString;


//! A SelectExplore determines from an input list of Entities, <br>
//!           a list obtained by a way of exploration. This implies the <br>
//!           possibility of recursive exploration : the output list is <br>
//!           itself reused as input, etc... <br>
//!           Examples : Shared Entities, can be considered at one level <br>
//!           (immediate shared) or more, or max level <br>
//! <br>
//!           Then, for each input entity, if it is not rejected, it can be <br>
//!           either taken itself, or explored : it then produces a list. <br>
//!           According to a level, either the produced lists or taken <br>
//!           entities give the result (level one), or lists are themselves <br>
//!           considered and for each item, is it taken or explored. <br>
//! <br>
//!           Remark that rejection is just a safety : normally, an input <br>
//!             entity is, either taken itself, or explored <br>
//!           A maximum level can be specified. Else, the process continues <br>
//!           until all entities have been either taken or rejected <br>
class IFSelect_SelectExplore : public IFSelect_SelectDeduct {

public:

  //! Returns the required exploring level <br>
  Standard_EXPORT     Standard_Integer Level() const;
  //! Returns the list of selected entities. Works by calling the <br>
//!           method Explore on each input entity : it can be rejected, <br>
//!           taken for output, or to explore. If the maximum level has not <br>
//!           yet been attained, or if no max level is specified, entities <br>
//!           to be explored are themselves used as if they were input <br>
  Standard_EXPORT     Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Analyses and, if required, Explores an entity, as follows : <br>
//!           The explored list starts as empty, it has to be filled by this <br>
//!           method. <br>
//!           If it returns False, <ent> is rejected for result (this is to <br>
//!               be used only as safety) <br>
//!           If it returns True and <explored> remains empty, <ent> is <br>
//!             taken itself for result, not explored <br>
//!           If it returns True and <explored> is not empty, the content <br>
//!             of this list is considered : <br>
//!             If maximum level is attained, it is taken for result <br>
//!             Else (or no max), each of its entity will be itself explored <br>
  Standard_EXPORT   virtual  Standard_Boolean Explore(const Standard_Integer level,const Handle(Standard_Transient)& ent,const Interface_Graph& G,Interface_EntityIterator& explored) const = 0;
  //! Returns a text saying "(Recursive)" or "(Level nn)" plus <br>
//!           specific criterium returned by ExploreLabel (see below) <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;
  //! Returns a text defining the way of exploration <br>
  Standard_EXPORT   virtual  TCollection_AsciiString ExploreLabel() const = 0;




  DEFINE_STANDARD_RTTI(IFSelect_SelectExplore)

protected:

  //! Initializes a SelectExplore : the level must be specified on <br>
//!           starting. 0 means all levels, 1 means level one only, etc... <br>
  Standard_EXPORT   IFSelect_SelectExplore(const Standard_Integer level);



private: 


Standard_Integer thelevel;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
