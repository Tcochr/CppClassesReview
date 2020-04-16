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

    cout << fA.getNr() << "/" << fB.getDr() << endl;
    fA.setNr(2);
    fA.setDr(3);
    cout << fA.getNr() << "/" << fB.getDr() << endl;

    return 0;
}