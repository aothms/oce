// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Sphere_HeaderFile
#define _StepShape_Sphere_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_Sphere.hxx>

#include <Standard_Real.hxx>
#include <Handle_StepGeom_Point.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_Point;
class TCollection_HAsciiString;



class StepShape_Sphere : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a Sphere
  Standard_EXPORT StepShape_Sphere();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Real aRadius, const Handle(StepGeom_Point)& aCentre) ;
  
  Standard_EXPORT   void SetRadius (const Standard_Real aRadius) ;
  
  Standard_EXPORT   Standard_Real Radius()  const;
  
  Standard_EXPORT   void SetCentre (const Handle(StepGeom_Point)& aCentre) ;
  
  Standard_EXPORT   Handle(StepGeom_Point) Centre()  const;




  DEFINE_STANDARD_RTTI(StepShape_Sphere)

protected:




private: 


  Standard_Real radius;
  Handle(StepGeom_Point) centre;


};







#endif // _StepShape_Sphere_HeaderFile
