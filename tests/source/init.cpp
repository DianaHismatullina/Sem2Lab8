#include <testclass.hpp>
#include <catch.hpp>

SCENARIO("ConstrDefa") {
	Complex complex;
	REQUIRE(Complex.Real_() == 0);
	REQUIRE(Complex.Im_() == 0);
}

SCENARIO("constructor with params") {
	Complex complex(1, 2);
	REQUIRE(Complex.Real_() == 1);
	REQUIRE(Complex.Im_() == 2);
}

SCENARIO("copy constructor") {
	Complex comp(1, 2);
	Complex copy(comp);
	REQUIRE(copy.Real_() == 1);
	REQUIRE(copy.Im_() == 2);
}

SCENARIO("operator*") {
	Complex c1(7, 6);
	Complex c2(5, 4);
	Complex c3(11, 58);
	REQUIRE((c1*c2)==c3);
}

SCENARIO("operator/") {
	Complex c1(7, 6);
	Complex c2(7, 6);
	Complex c3(1, 0);
	REQUIRE((c1/c2)==c3);
}

SCENARIO("operator +=") {
	Complex c1(13, 1); 
	Complex c2(7, 6);
	Complex c3(20, 7);
	REQUIRE((c1+=c2)==c3);
}

SCENARIO("operator -=") {
	Complex c1(13, 10); 
	Complex c2(7, 6);
	Complex c3(6, 4);
	REQUIRE((c1-=c2)==c3);
}

SCENARIO("operator *=") {
	Complex c1(7, 6); 
	Complex c2(5, 4);
	Complex c3(11, 58);
	REQUIRE((c1*=c2)==c3);
}

SCENARIO("operator /=") {
	Complex c1(7, 6); 
	Complex c2(7, 6);
	Complex c3(1, 0);
	REQUIRE((c1/=c2)==c3);
}

SCENARIO("operator =") {
	Complex c1(3, 3); 
	Complex c2=c1;
	REQUIRE(c2==c1);
}

SCENARIO("operator ==") {
	Complex c1(3, 1); 
	Complex c2(3, 1);
	REQUIRE(c1==c2);
}