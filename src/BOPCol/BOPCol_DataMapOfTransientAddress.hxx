// Created by: Peter KURNEV
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef BOPCol_DataMapOfTransientAddress_HeaderFile
#define BOPCol_DataMapOfTransientAddress_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

 
#include <NCollection_DataMap.hxx>
#include <TColStd_MapTransientHasher.hxx>

typedef NCollection_DataMap<Handle(Standard_Transient), Standard_Address, TColStd_MapTransientHasher> BOPCol_DataMapOfTransientAddress; 
typedef BOPCol_DataMapOfTransientAddress::Iterator BOPCol_DataMapIteratorOfDataMapOfTransientAddress; 
 
#undef _NCollection_MapHasher


#endif
