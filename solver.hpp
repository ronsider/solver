#include <iostream>
#include <complex>

namespace solver
{

    
   class RealVariable
    {
        public:
        std::complex<double>c;
        RealVariable(double d);
        RealVariable();
   };

    class ComplexVariable
    {
        public:
        std::complex <double>d;
        ComplexVariable(double d1,double d2);
        ComplexVariable();

    };

           



    //any number can be represnted as complex: a+bi(b!=0) for complex and c+di(d==0) as real
// ComplexVariable& solve(RealVariable& a,RealVariable& b);

// ComplexVariable& solve(RealVariable& a,ComplexVariable& b);

// ComplexVariable& solve(RealVariable& a,ComplexVariable& b);

//    ComplexVariable operator +(const ComplexVariable& c1,const ComplexVariable& c2);
//    ComplexVariable operator *(const ComplexVariable& c1,const ComplexVariable& c2);
//    ComplexVariable operator ^(const ComplexVariable& c1,const ComplexVariable& c2);
//    ComplexVariable operator -(const ComplexVariable& c1,const ComplexVariable& c2);
//    ComplexVariable operator /(const ComplexVariable& c1,const ComplexVariable& c2);


    double solve(const RealVariable&);
    RealVariable operator-(const RealVariable&,int);
    RealVariable operator*(int,const RealVariable&);
    RealVariable operator==(const RealVariable&,int);
    RealVariable operator^(const RealVariable&,int);
    RealVariable operator+(const RealVariable&,const RealVariable&);
    RealVariable operator/(const RealVariable&,int);
    RealVariable operator-(const RealVariable&,const RealVariable&);
    RealVariable operator==(const RealVariable&,const RealVariable&);


   /////////////////////////
   /////////////////////////

     std::complex<double> solve(const ComplexVariable&);
     ComplexVariable operator*(int,const ComplexVariable&); 
     ComplexVariable operator-(const ComplexVariable&,int);
     ComplexVariable operator==(const ComplexVariable&,int);
     ComplexVariable operator^(const ComplexVariable&,int);
     ComplexVariable operator+(const ComplexVariable&,const ComplexVariable&);
     ComplexVariable operator+(const ComplexVariable&,int);
     ComplexVariable operator/(const ComplexVariable&,int);
     ComplexVariable operator+(int,const ComplexVariable&);
     ComplexVariable operator-(const ComplexVariable&,const ComplexVariable&);
     ComplexVariable operator==(const ComplexVariable&,const ComplexVariable&);
     ComplexVariable operator+(const ComplexVariable&,const std::complex<double>&);


}