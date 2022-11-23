#ifndef FRACTION_H 
#define FRACTION_H
#include "fraction.h"

#include <bits/stdc++.h>

class Fraction{ 
private:
    //? Data members
    int numer; 
    int denom; 
    static int count; //Static member 

    
public: 
    //Constructor 
    Fraction(); 
    Fraction(int num, int denom); 
    Fraction(const Fraction & fract); 
    
    //Destructor
    ~Fraction(); 
    
    //Accessors
    int getNum() const; 
    int getDen() const; 
    void print() const; 
    
    //Mutators 
    void setNumer(int num);
    void setDenom(int den); 
    
private: //private function 
    void normalize(); 
    int gcd(int n, int m); 
    
}; 


#endif