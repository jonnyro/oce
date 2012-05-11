// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeInterference_SequenceNodeOfSequenceOfInterfObj_HeaderFile
#define _ShapeInterference_SequenceNodeOfSequenceOfInterfObj_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeInterference_SequenceNodeOfSequenceOfInterfObj_HeaderFile
#include <Handle_ShapeInterference_SequenceNodeOfSequenceOfInterfObj.hxx>
#endif

#ifndef _Handle_ShapeInterference_InterfObj_HeaderFile
#include <Handle_ShapeInterference_InterfObj.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class ShapeInterference_InterfObj;
class ShapeInterference_SequenceOfInterfObj;



class ShapeInterference_SequenceNodeOfSequenceOfInterfObj : public TCollection_SeqNode {

public:

  
      ShapeInterference_SequenceNodeOfSequenceOfInterfObj(const Handle(ShapeInterference_InterfObj)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_ShapeInterference_InterfObj& Value() const;




  DEFINE_STANDARD_RTTI(ShapeInterference_SequenceNodeOfSequenceOfInterfObj)

protected:




private: 


Handle_ShapeInterference_InterfObj myValue;


};

#define SeqItem Handle_ShapeInterference_InterfObj
#define SeqItem_hxx <ShapeInterference_InterfObj.hxx>
#define TCollection_SequenceNode ShapeInterference_SequenceNodeOfSequenceOfInterfObj
#define TCollection_SequenceNode_hxx <ShapeInterference_SequenceNodeOfSequenceOfInterfObj.hxx>
#define Handle_TCollection_SequenceNode Handle_ShapeInterference_SequenceNodeOfSequenceOfInterfObj
#define TCollection_SequenceNode_Type_() ShapeInterference_SequenceNodeOfSequenceOfInterfObj_Type_()
#define TCollection_Sequence ShapeInterference_SequenceOfInterfObj
#define TCollection_Sequence_hxx <ShapeInterference_SequenceOfInterfObj.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
