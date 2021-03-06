// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_HeaderFile
#define _SelectBasics_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
class SelectBasics_EntityOwner;
class SelectBasics_SensitiveEntity;


//! interface class for dynamic selection
class SelectBasics 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Structure to provide all-in-one result of selection of sensitive
  //! for "Matches" method of SelectBasics_SensitiveEntity.
  Standard_EXPORT static   Standard_Integer MaxOwnerPriority() ;
  
  Standard_EXPORT static   Standard_Integer MinOwnerPriority() ;




protected:





private:




friend class SelectBasics_EntityOwner;
friend class SelectBasics_SensitiveEntity;

};







#endif // _SelectBasics_HeaderFile
