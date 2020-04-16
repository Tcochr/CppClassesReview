//fraction.h

#ifndef CPPCLASSESREVIEW_FRACTION_H
#define CPPCLASSESREVIEW_FRACTION_H

class Fraction{
public:
    //constructor
    //accessors
    //modifiers, mutators
    Fraction(int nmr,int dnr);
    int getNr();
    int getDr();
    double getDecVal();

    void setNr(int t);
    void setDr(int t);

private:
    int nr;
    int dr;
    //instance variables
    //helper functions

};

#endif
