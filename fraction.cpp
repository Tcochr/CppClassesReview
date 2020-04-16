//
// Created by Cochr on 4/16/2020.
//

//if fraction is not defined, then include code for fraction since C++ compiles top->do
#include "fraction.h"


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

