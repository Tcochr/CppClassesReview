//
// Created by Cochr on 4/16/2020.
//

#include<iostream>
#include"fraction.h"
#include"Fract.h"

using namespace std;

int main(){
    Fraction fA(1,4);
    Fraction fB(1,3);

    Fraction fC = fA + fB;
    cout << fC.getDecVal() << endl;

    Fraction fD = fA/fB;
    cout << fD.getDecVal() << endl;

    Fraction fE = fA-fB;
    cout << fE.getDecVal() << endl;
    cout << fE << endl;
    return 0;
}