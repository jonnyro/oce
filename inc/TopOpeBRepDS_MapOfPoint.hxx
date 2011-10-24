// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_MapOfPoint_HeaderFile
#define _TopOpeBRepDS_MapOfPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopOpeBRepDS_PointData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapNodeOfMapOfPoint;
class TopOpeBRepDS_DataMapIteratorOfMapOfPoint;



class TopOpeBRepDS_MapOfPoint  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TopOpeBRepDS_MapOfPoint(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopOpeBRepDS_MapOfPoint& Assign(const TopOpeBRepDS_MapOfPoint& Other) ;
    TopOpeBRepDS_MapOfPoint& operator =(const TopOpeBRepDS_MapOfPoint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepDS_MapOfPoint()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const TopOpeBRepDS_PointData& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const TopOpeBRepDS_PointData& Find(const Standard_Integer& K) const;
   const TopOpeBRepDS_PointData& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopOpeBRepDS_PointData& ChangeFind(const Standard_Integer& K) ;
    TopOpeBRepDS_PointData& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   TopOpeBRepDS_MapOfPoint(const TopOpeBRepDS_MapOfPoint& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif