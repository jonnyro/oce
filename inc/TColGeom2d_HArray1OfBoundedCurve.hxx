// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom2d_HArray1OfBoundedCurve_HeaderFile
#define _TColGeom2d_HArray1OfBoundedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColGeom2d_HArray1OfBoundedCurve_HeaderFile
#include <Handle_TColGeom2d_HArray1OfBoundedCurve.hxx>
#endif

#ifndef _TColGeom2d_Array1OfBoundedCurve_HeaderFile
#include <TColGeom2d_Array1OfBoundedCurve.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Geom2d_BoundedCurve_HeaderFile
#include <Handle_Geom2d_BoundedCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Geom2d_BoundedCurve;
class TColGeom2d_Array1OfBoundedCurve;



class TColGeom2d_HArray1OfBoundedCurve : public MMgt_TShared {

public:

  
      TColGeom2d_HArray1OfBoundedCurve(const Standard_Integer Low,const Standard_Integer Up);
  
      TColGeom2d_HArray1OfBoundedCurve(const Standard_Integer Low,const Standard_Integer Up,const Handle(Geom2d_BoundedCurve)& V);
  
        void Init(const Handle(Geom2d_BoundedCurve)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(Geom2d_BoundedCurve)& Value) ;
  
       const Handle_Geom2d_BoundedCurve& Value(const Standard_Integer Index) const;
  
        Handle_Geom2d_BoundedCurve& ChangeValue(const Standard_Integer Index) ;
  
       const TColGeom2d_Array1OfBoundedCurve& Array1() const;
  
        TColGeom2d_Array1OfBoundedCurve& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColGeom2d_HArray1OfBoundedCurve)

protected:




private: 


TColGeom2d_Array1OfBoundedCurve myArray;


};

#define ItemHArray1 Handle_Geom2d_BoundedCurve
#define ItemHArray1_hxx <Geom2d_BoundedCurve.hxx>
#define TheArray1 TColGeom2d_Array1OfBoundedCurve
#define TheArray1_hxx <TColGeom2d_Array1OfBoundedCurve.hxx>
#define TCollection_HArray1 TColGeom2d_HArray1OfBoundedCurve
#define TCollection_HArray1_hxx <TColGeom2d_HArray1OfBoundedCurve.hxx>
#define Handle_TCollection_HArray1 Handle_TColGeom2d_HArray1OfBoundedCurve
#define TCollection_HArray1_Type_() TColGeom2d_HArray1OfBoundedCurve_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
