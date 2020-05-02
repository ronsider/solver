#include <complex>
#include "doctest.h"
#include "solver.hpp"
#include <math.h>


using namespace std;
using namespace solver;



TEST_CASE("real variable to the second power"){
    RealVariable x;
    CHECK(solve(x^2==169)==13);
    CHECK(((solve((x^2)+7 == 16)==3) || (solve((x^2)+7 == 16)==-3)));
    CHECK(solve((-0.5)*x == 10)==-20);
    CHECK(solve(x^2==196)==14);
    CHECK(solve(x^2==225)==15);
    CHECK(solve(x^2 == 256)==16);
    CHECK(solve(x^2 == 289)==17);
    CHECK(solve(x^2==324)==18);
    CHECK(solve(x^2==361)==19);
    CHECK(solve(x^2 == 400)==20);
}

TEST_CASE("above second power ^2 is forbidden according exersice criteria"){
    ComplexVariable c;
    CHECK_THROWS(solve((c^(2+1)) ==27));
    CHECK_THROWS(solve((c^4) == 16));
    CHECK_THROWS(solve((c^5) == 32));
    CHECK_THROWS(solve((c^6) == 64));
    CHECK_THROWS(solve((c^7) == 128));
    CHECK_THROWS(solve((c^8) == 256));
    CHECK_THROWS(solve((c^9) == 512));
    CHECK_THROWS(solve((c^10) == 1024));
    CHECK_THROWS(solve((c^11) == 2048));

}


TEST_CASE("complex variable to the second power"){
    ComplexVariable c;
    CHECK((solve((c^2)==0))==(complex<double>(0,0)));
    CHECK((solve((c^2)==-4))==(complex<double> (0,2)));
    CHECK(solve(c^2==-9)==complex<double>(0,3));
    CHECK(solve(c^2==-16)==complex<double>(0,4));
    CHECK(solve(c^2==-25)==complex<double>(0,5));
    CHECK(solve(c^2==-36)==complex<double>(0,6));
    CHECK(solve(c^2==-49)==complex<double>(0,7));
    CHECK(solve(c^2==-64)==complex<double>(0,8));
    CHECK(solve(c^2==-81)==complex<double>(0,9));
    CHECK(solve(c^2==-100)==complex<double>(0,10));

}


TEST_CASE("No real answer"){
    RealVariable x;
    CHECK_THROWS(solve((x^2)==-1));
    CHECK_THROWS(solve(x^2)==-4);
    CHECK_THROWS(solve(x^2)==-9);
    CHECK_THROWS(solve(x^2)==-16);
    CHECK_THROWS(solve(x^2)==-25);
    CHECK_THROWS(solve(x^2)==-36);
    CHECK_THROWS(solve(x^2)==-49);
    CHECK_THROWS(solve(x^2)==-64);
    CHECK_THROWS(solve(x^2)==-81);
    CHECK_THROWS(solve(x^2)==-100);
    CHECK_THROWS(solve(x^2)==-121);
    CHECK_THROWS(solve(x^2)==-144);
    CHECK_THROWS(solve(x^2)==-169);
    CHECK_THROWS(solve(x^2)==-196);
    CHECK_THROWS(solve(x^2)==-225);
    CHECK_THROWS(solve(x^2)==-256);
    CHECK_THROWS(solve(x^2)==-289);
    CHECK_THROWS(solve(x^2)==-324);
    CHECK_THROWS(solve(x^2)==-361);
    CHECK_THROWS(solve(x^2)==-400);
    CHECK_THROWS(solve(x^2)==-441);
    CHECK_THROWS(solve(x^2)==-484);
    CHECK_THROWS(solve(x^2)==-529);
    CHECK_THROWS(solve(x^2)==-576);
    CHECK_THROWS(solve(x^2)==-625);

}

TEST_CASE("divison by zero for real numbers is forbidden"){
    RealVariable x;
    CHECK_THROWS(solve((x^2)/0 == 0));
    CHECK_THROWS(solve(1+x/0 == 0));
    CHECK_THROWS(solve(10*x/0 == 0));
    CHECK_THROWS(solve(15+x/0 == 0));
    CHECK_THROWS(solve((x+4)/0==0));
    CHECK_THROWS(solve(3102*x/0==0));   
    CHECK_THROWS(solve(30*x/0==0));
    CHECK_THROWS(solve(31*x+13/0==0));
    CHECK_THROWS(solve(32*x/0==0));
    CHECK_THROWS(solve(33*x/0==0));
    CHECK_THROWS(solve(34*x+12/0==0));
    CHECK_THROWS(solve(35*x/0==0));
    CHECK_THROWS(solve(36*x/0==0));
    CHECK_THROWS(solve(37*x+11/0==0));
    CHECK_THROWS(solve(38*x/0==0));
    CHECK_THROWS(solve(39*x/0==0));
    CHECK_THROWS(solve(40*x+22/0==0));
    CHECK_THROWS(solve(41*x/0==0));
    CHECK_THROWS(solve(42*x/0==0));
    CHECK_THROWS(solve(43*x+121/0==0));
    CHECK_THROWS(solve(44*x/0==0));
    CHECK_THROWS(solve(45*x/0==0));
    CHECK_THROWS(solve(46*x+13/0==0));
    CHECK_THROWS(solve(47*x/0==0));
}



TEST_CASE("Division by zero for complex numbers is forbidden"){
    ComplexVariable c;
    CHECK_THROWS(solve((c^2)/0 == 0));
    CHECK_THROWS(solve(18*c/0==33));
    CHECK_THROWS(solve(16*c/0==0.0));
    CHECK_THROWS(solve(21*c/0==0));
    CHECK_THROWS(solve(11*c/0==13));
    CHECK_THROWS(solve(1.0*c/0.0==0));
    CHECK_THROWS(solve(12*c+25.0i/0.0==14.0));
    CHECK_THROWS(solve((c^2)/0 == 2));
    CHECK_THROWS(solve((c^2)/0 == 3));
    CHECK_THROWS(solve((c^2)/0 == 4));
    CHECK_THROWS(solve((c^2)/0 == 5));
    CHECK_THROWS(solve((c^2)/0 == 6));
    CHECK_THROWS(solve((c^2)/0 == 7));   
    CHECK_THROWS(solve(123*c/0==3));
    CHECK_THROWS(solve(113*c/0==0.0));
    CHECK_THROWS(solve(2+11*c/0==0));
    CHECK_THROWS(solve(12412*c/0==13));
    CHECK_THROWS(solve(65*c+3.0i/0.0==100.5));
    CHECK_THROWS(solve((c^2)/0 == 22));
    CHECK_THROWS(solve(90*c/0==30));
    CHECK_THROWS(solve(27*c/0==0.0));
    CHECK_THROWS(solve(29*c/0==0));
    CHECK_THROWS(solve(68*c/0==0));
    CHECK_THROWS(solve(36*c+11.0i/0.0==99.0));

}








