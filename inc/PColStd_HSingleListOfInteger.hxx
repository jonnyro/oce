// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HSingleListOfInteger_HeaderFile
#define _PColStd_HSingleListOfInteger_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HSingleListOfInteger_HeaderFile
#include <Handle_PColStd_HSingleListOfInteger.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PColStd_HSingleListOfInteger_HeaderFile
#include <Handle_PColStd_HSingleListOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PMMgt_PManaged_HeaderFile
#include <PMMgt_PManaged.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_Persistent;
class Standard_NoSuchObject;


class PColStd_HSingleListOfInteger : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColStd_HSingleListOfInteger();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Handle_PColStd_HSingleListOfInteger Construct(const Standard_Integer& T) const;
  
  Standard_EXPORT     Standard_Integer Value() const;
  
  Standard_EXPORT     Handle_PColStd_HSingleListOfInteger Tail() const;
  
  Standard_EXPORT     void SwapTail(Handle(PColStd_HSingleListOfInteger)& WithList) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer& T) ;
  
  Standard_EXPORT     void ChangeForwardPointer(const Handle(PColStd_HSingleListOfInteger)& ForwardPointer) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

PColStd_HSingleListOfInteger(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Standard_Integer _CSFDB_GetPColStd_HSingleListOfIntegerData() const { return Data; }
    void _CSFDB_SetPColStd_HSingleListOfIntegerData(const Standard_Integer p) { Data = p; }
    Handle(PColStd_HSingleListOfInteger) _CSFDB_GetPColStd_HSingleListOfIntegerNext() const { return Next; }
    void _CSFDB_SetPColStd_HSingleListOfIntegerNext(const Handle(PColStd_HSingleListOfInteger)& p) { Next = p; }



  DEFINE_STANDARD_RTTI(PColStd_HSingleListOfInteger)

protected:




private: 


Standard_Integer Data;
Handle_PColStd_HSingleListOfInteger Next;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColStd_HSingleListOfInteger& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColStd_HSingleListOfInteger& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
