// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HSequenceOfReal_HeaderFile
#define _PColStd_HSequenceOfReal_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfReal_HeaderFile
#include <Handle_PColStd_HSequenceOfReal.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfReal_HeaderFile
#include <Handle_PColStd_HSequenceOfReal.hxx>
#endif
#ifndef _Handle_PColStd_SeqNodeOfHSequenceOfReal_HeaderFile
#include <Handle_PColStd_SeqNodeOfHSequenceOfReal.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class PColStd_SeqNodeOfHSequenceOfReal;
class Standard_Persistent;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PColStd_SeqExplorerOfHSequenceOfReal;


class PColStd_HSequenceOfReal : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColStd_HSequenceOfReal();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Standard_Integer Length() const;
  
  Standard_EXPORT     Standard_Real First() const;
  
  Standard_EXPORT     Standard_Real Last() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Standard_Real& T) ;
  
  Standard_EXPORT     void Append(const Handle(PColStd_HSequenceOfReal)& S) ;
  
  Standard_EXPORT     void Prepend(const Standard_Real& T) ;
  
  Standard_EXPORT     void Prepend(const Handle(PColStd_HSequenceOfReal)& S) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const Standard_Real& T) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const Handle(PColStd_HSequenceOfReal)& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Standard_Real& T) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(PColStd_HSequenceOfReal)& S) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer I,const Standard_Integer J) ;
  
  Standard_EXPORT     Handle_PColStd_HSequenceOfReal SubSequence(const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  
  Standard_EXPORT     Handle_PColStd_HSequenceOfReal Split(const Standard_Integer Index) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_Real& T) ;
  
  Standard_EXPORT     Standard_Real Value(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Real& T) const;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Standard_Real& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Standard_Real& T) const;
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;
  
  Standard_EXPORT     void Destroy() ;
~PColStd_HSequenceOfReal()
{
  Destroy();
}
PColStd_HSequenceOfReal(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(PColStd_SeqNodeOfHSequenceOfReal) _CSFDB_GetPColStd_HSequenceOfRealFirstItem() const { return FirstItem; }
    void _CSFDB_SetPColStd_HSequenceOfRealFirstItem(const Handle(PColStd_SeqNodeOfHSequenceOfReal)& p) { FirstItem = p; }
    Handle(PColStd_SeqNodeOfHSequenceOfReal) _CSFDB_GetPColStd_HSequenceOfRealLastItem() const { return LastItem; }
    void _CSFDB_SetPColStd_HSequenceOfRealLastItem(const Handle(PColStd_SeqNodeOfHSequenceOfReal)& p) { LastItem = p; }
    Standard_Integer _CSFDB_GetPColStd_HSequenceOfRealSize() const { return Size; }
    void _CSFDB_SetPColStd_HSequenceOfRealSize(const Standard_Integer p) { Size = p; }

friend class PColStd_SeqExplorerOfHSequenceOfReal;


  DEFINE_STANDARD_RTTI(PColStd_HSequenceOfReal)

protected:




private: 

  
  Standard_EXPORT     Handle_PColStd_SeqNodeOfHSequenceOfReal GetFirst() const;
  
  Standard_EXPORT     Handle_PColStd_SeqNodeOfHSequenceOfReal GetLast() const;

Handle_PColStd_SeqNodeOfHSequenceOfReal FirstItem;
Handle_PColStd_SeqNodeOfHSequenceOfReal LastItem;
Standard_Integer Size;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColStd_HSequenceOfReal& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColStd_HSequenceOfReal& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
