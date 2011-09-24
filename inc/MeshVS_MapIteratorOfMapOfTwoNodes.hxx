// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_MapIteratorOfMapOfTwoNodes_HeaderFile
#define _MeshVS_MapIteratorOfMapOfTwoNodes_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _MeshVS_TwoNodes_HeaderFile
#include <MeshVS_TwoNodes.hxx>
#endif
#ifndef _Handle_MeshVS_StdMapNodeOfMapOfTwoNodes_HeaderFile
#include <Handle_MeshVS_StdMapNodeOfMapOfTwoNodes.hxx>
#endif
class Standard_NoSuchObject;
class MeshVS_TwoNodesHasher;
class MeshVS_MapOfTwoNodes;
class MeshVS_StdMapNodeOfMapOfTwoNodes;



class MeshVS_MapIteratorOfMapOfTwoNodes  : public TCollection_BasicMapIterator {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   MeshVS_MapIteratorOfMapOfTwoNodes();
  
  Standard_EXPORT   MeshVS_MapIteratorOfMapOfTwoNodes(const MeshVS_MapOfTwoNodes& aMap);
  
  Standard_EXPORT     void Initialize(const MeshVS_MapOfTwoNodes& aMap) ;
  
  Standard_EXPORT    const MeshVS_TwoNodes& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif