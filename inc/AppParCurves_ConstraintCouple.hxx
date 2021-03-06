// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_ConstraintCouple_HeaderFile
#define _AppParCurves_ConstraintCouple_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <AppParCurves_Constraint.hxx>


//! associates an index and a constraint for an object.
//! This couple is used by AppDef_TheVariational when performing approximations.
class AppParCurves_ConstraintCouple 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! returns an indefinite ConstraintCouple.
  Standard_EXPORT AppParCurves_ConstraintCouple();
  
  //! Create a couple the object <Index> will have the
  //! constraint <Cons>.
  Standard_EXPORT AppParCurves_ConstraintCouple(const Standard_Integer TheIndex, const AppParCurves_Constraint Cons);
  
  //! returns the index of the constraint object.
  Standard_EXPORT   Standard_Integer Index()  const;
  
  //! returns the constraint of the object.
  Standard_EXPORT   AppParCurves_Constraint Constraint()  const;
  
  //! Changes the index of the constraint object.
  Standard_EXPORT   void SetIndex (const Standard_Integer TheIndex) ;
  
  //! Changes the constraint of the object.
  Standard_EXPORT   void SetConstraint (const AppParCurves_Constraint Cons) ;




protected:





private:



  Standard_Integer myIndex;
  AppParCurves_Constraint myConstraint;


};







#endif // _AppParCurves_ConstraintCouple_HeaderFile
