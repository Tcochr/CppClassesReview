//
// Created by Cochr on 4/16/2020.
//

//if fraction is not defined, then include code for fraction since C++ compiles top->do
#include "fraction.h"
#include<iostream>
using namespace std;

Fraction::Fraction(int nmr, int dnr) {
    nr = nmr;
    dr = dnr;
    reduce();
}

Fraction::Fraction(int num){
    nr = num;
    dr = 1;
    reduce();
}

Fraction::Fraction(){
    dr = 1;
    nr = 0;
}

//deconstruct decimal value into a fraction
// 3.31 -> 33.1/1 -> 431/100
Fraction::Fraction(double dec){
    int numr = (int)(dec);
    int denr = 1;

    while(abs(dec-numr) > 0.000001){
        cout << dec << " - " << numr << ":  " << (dec-numr) << endl;
        dec *= 10;
        numr = (int)(dec);
        denr *=10;
    }
    nr = numr;
    dr = denr;
    reduce();
}
//define the accessors
int Fraction::getNr() {
    return nr;
}

int Fraction::getDr(){
    return dr;
}

double Fraction::getDecVal() {
    return (double)(nr)/dr;
}

//modifiers & mutators
void Fraction::setNr(int t) {
    nr = t;
}

void Fraction::setDr(int t) {
    dr = t;
}


Fraction &operator+(Fraction &ls, Fraction &rs){
    int commonDenom = ls.getDr() * rs.getDr();
    int newNumer = ls.getNr() * rs.getDr() + rs.getNr() * ls.getDr();
    Fraction *sum = new Fraction(newNumer,commonDenom);
    return *sum;
}

Fraction &operator-(Fraction  &ls, Fraction &rs){
    int commonDenom = ls.getDr() * rs.getDr();
    int newNumer = (ls.getNr()*rs.getDr()) - (rs.getNr()*ls.getDr());
    Fraction *diff = new Fraction(newNumer,commonDenom);
    return *diff;
}

Fraction &operator*(Fraction &ls, Fraction &rs){
    int commonDenom = ls.getDr() * rs.getDr();
    int newNumer = ls.getNr() * ls.getNr();
    Fraction *product = new Fraction(newNumer,commonDenom);
    return *product;
}

Fraction &operator/(Fraction &ls, Fraction &rs){
    int commonDenom = ls.getDr() * ls.getNr();
    int newNumer = ls.getNr() * rs.getDr();
    Fraction *quotient = new Fraction(newNumer,commonDenom);
    return *quotient;
}

ostream &operator<< (ostream &out, Fraction &rhs){
    out << rhs.getNr() << "/" << rhs.getDr();
}

//obtaining the gcd via euclidean algorithm
// (24,54) -> (54,24) -> (24,6) -> (6,0)
int Fraction::gcd(int a, int b){
    if(b == 0)
        return a;
    else{
        cout << "gcd: " << "(" << b << " , " << a%b << ")" << endl;
        return gcd(b,a%b);
    }
}

void Fraction::reduce(){
    int GCD = gcd(nr,dr);
    nr /= GCD;
    dr /= GCD;
}