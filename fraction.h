//fraction.h

#ifndef CPPCLASSESREVIEW_FRACTION_H
#define CPPCLASSESREVIEW_FRACTION_H
#include <iostream>
using namespace std;

class Fraction{
public:
    //constructor
    //accessors
    //modifiers, mutators
    Fraction(int nmr,int dnr);
    Fraction(int num);
    Fraction();
    Fraction(double value);

    int getNr();
    int getDr();
    double getDecVal();
    void setNr(int t);
    void setDr(int t);

    //ensure that fractions are reduced
    void reduce();

private:
    int nr;
    int dr;
    //obtain greatest common divisor
    int gcd(int a, int b);
    //instance variables
    //helper functions
};
Fraction &operator+(Fraction &ls, Fraction &rs);
Fraction &operator/(Fraction &ls, Fraction &rs);
Fraction &operator*(Fraction &ls, Fraction &rs);
Fraction&operator-(Fraction &ls, Fraction &rs);
ostream &operator<<(ostream &out, Fraction &rhs);
#endif
