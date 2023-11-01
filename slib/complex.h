#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class complex
{
	double real;
	double imagin;
public:
	// constructs:
	complex() : real(0.0), imagin(0.0) {}; // default construct
	complex(double r) : real(r), imagin(5.0) {}; // const imaginary
	complex(const complex& m) : real(m.real), imagin(m.imagin) {}; // construct of copying values

	// operator overloading
	complex operator+(const complex& m); // addition of complex numbers
	complex operator-(const complex& m); // subtraction of complex number
	complex operator*(const complex& m); // multiplication of two complex numbers
	complex operator/(const complex& m); // division of two complex numbers

	void init(double r, double i); // initialising values
	void read(); // keyboard input
	void display(); // value output
	bool equ(complex m); // check if 2 complex numbers are equal
	complex conj(); // conjunction of one complex number
	string tostr(); // transfer values to string type 
};

