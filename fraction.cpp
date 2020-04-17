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
