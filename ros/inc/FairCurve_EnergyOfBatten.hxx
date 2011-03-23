// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_EnergyOfBatten_HeaderFile
#define _FairCurve_EnergyOfBatten_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _FairCurve_BattenLaw_HeaderFile
#include <FairCurve_BattenLaw.hxx>
#endif
#ifndef _FairCurve_DistributionOfTension_HeaderFile
#include <FairCurve_DistributionOfTension.hxx>
#endif
#ifndef _FairCurve_DistributionOfSagging_HeaderFile
#include <FairCurve_DistributionOfSagging.hxx>
#endif
#ifndef _FairCurve_AnalysisCode_HeaderFile
#include <FairCurve_AnalysisCode.hxx>
#endif
#ifndef _FairCurve_Energy_HeaderFile
#include <FairCurve_Energy.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
class TColStd_HArray1OfReal;
class TColgp_HArray1OfPnt2d;
class FairCurve_BattenLaw;
class math_Vector;


//! Energy Criterium to minimize in Batten. <br>
class FairCurve_EnergyOfBatten  : public FairCurve_Energy {
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

  //! Angles corresspond to the Ox axis <br>
  Standard_EXPORT   FairCurve_EnergyOfBatten(const Standard_Integer BSplOrder,const Handle(TColStd_HArray1OfReal)& FlatKnots,const Handle(TColgp_HArray1OfPnt2d)& Poles,const Standard_Integer ContrOrder1,const Standard_Integer ContrOrder2,const FairCurve_BattenLaw& Law,const Standard_Real LengthSliding,const Standard_Boolean FreeSliding = Standard_True,const Standard_Real Angle1 = 0,const Standard_Real Angle2 = 0);
  //! return  the  lengthSliding = P1P2 + Sliding <br>
        Standard_Real LengthSliding() const;
  //! return  the status <br>
        FairCurve_AnalysisCode Status() const;
  //! compute the variables <X> wich correspond with the field <MyPoles> <br>
  Standard_EXPORT   virtual  Standard_Boolean Variable(math_Vector& X) const;





protected:

  //! compute  the  poles wich correspond with the variable X <br>
  Standard_EXPORT   virtual  void ComputePoles(const math_Vector& X) ;
  //! compute the energy in intermediat format <br>
  Standard_EXPORT   virtual  Standard_Boolean Compute(const Standard_Integer DerivativeOrder,math_Vector& Result) ;




private:



Standard_Real MyLengthSliding;
Standard_Real OriginalSliding;
Standard_Boolean MyFreeSliding;
FairCurve_BattenLaw MyBattenLaw;
FairCurve_DistributionOfTension MyTension;
FairCurve_DistributionOfSagging MySagging;
FairCurve_AnalysisCode MyStatus;


};


#include <FairCurve_EnergyOfBatten.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif