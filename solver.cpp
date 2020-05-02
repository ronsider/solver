#include "solver.hpp"
#include<iostream>
#include <complex>


namespace solver
{
    RealVariable::RealVariable(double d)
    {
        c.imag(0);
        c.real(d);
    }
    RealVariable::RealVariable(){}

    ComplexVariable::ComplexVariable(double d1,double d2)
    {
        d.real(d1);
        d.imag(d2);

    }
    ComplexVariable::ComplexVariable(){}

   

    //////////////////////////
    /////////////////////////////


/////////////////////////////
    /////////////////////////

    
    double solve(const RealVariable&)
    {
        return 0;
    }
    std::complex<double> solve(const ComplexVariable&)
    {
        std::complex<double> c;
        return c;
    }


    // std::complex<double> operator*(int,RealVariable)
    // {
    //     return;
    // }
    RealVariable operator -(const RealVariable& ,int )
    {
        RealVariable r;
       

        return r;
            
    }
    RealVariable operator*(int,const RealVariable&)
    {
        RealVariable r;
        return r;
    }
    RealVariable operator==(const RealVariable&,int)
    {
        RealVariable r;
        return r;
    }

    RealVariable operator^(const RealVariable&,int)
    {
        RealVariable r;
        return r;
    }
    RealVariable operator+(const RealVariable&,const RealVariable&)
    {
        RealVariable r;
        return r;
    }
    RealVariable operator/(const RealVariable&,int)
    {
        RealVariable r;
        return r;
    }

    RealVariable operator-(const RealVariable&,const RealVariable&)
    {
        RealVariable r;
        return r;
    } 
    RealVariable operator==(const RealVariable&,const RealVariable&)
    {
        RealVariable r;
        return r;
    }

    //////////////////////////
    //////////////////////////
    //////////////////////////


    ComplexVariable operator*(int,const ComplexVariable&)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator-(const ComplexVariable&,int)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator==(const ComplexVariable&,int)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator^(const ComplexVariable&,int)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator+(const ComplexVariable&,const ComplexVariable&)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator+(const ComplexVariable&,int)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator/(const ComplexVariable&,int)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator+(int,const ComplexVariable&)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator-(const ComplexVariable&,const ComplexVariable&)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator==(const ComplexVariable&,const ComplexVariable&)
    {
        ComplexVariable c;
        return c;
    }

    ComplexVariable operator+(const ComplexVariable&,const std::complex<double>&)
    {
        ComplexVariable c;
        return c;
    }
 
}