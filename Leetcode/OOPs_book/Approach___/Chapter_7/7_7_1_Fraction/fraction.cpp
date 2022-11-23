#include <iostream> 
#include <cmath> 
#include <cassert> 

#include "fraction.h"
using namespace std; 


Fraction::Fraction(int num, int den = 1):numer(num),denom(den){ 
    
    normalize(); 

}

Fraction::Fraction():numer(0),denom(1){


}

Fraction::Fraction(const Fraction & fract):numer(fract.numer),denom(fract.denom){ 


}

Fraction::~Fraction(){ 


}


int Fraction::getDen() const{ 
    return this -> denom; 

}

int Fraction::getNum() const{ 
    return this -> numer; 
}

void Fraction::print() const { 
    cout << numer << "/" << denom << endl;

}

//Mutators 
void Fraction::setNumer(int numer){ 
    (*this).numer = numer; 
    normalize(); 
}

void Fraction::setDenom(int denom){ 
    (*this).denom = denom; 
    normalize(); 
}

void Fraction::normalize(){ 
    if (denom == 0){
        cout << "Impossible" << endl; 
        assert(false); 
    
    }
    if (denom < 0){ 
        denom = -denom; 
        numer = -numer; 
    
    }
    int divisor = gcd(abs(numer), abs(denom)); 
    numer = numer/divisor; 
    denom = denom/ divisor; 
}

int Fraction::gcd(int n, int m){ 
    int gcd =  1; 
    for (int k = 1; k <= n && k <= m; ++k){ 
        if (n % k == 0 && m % k == 0){ 
            gcd =  k; 
        
        }
    
    }
    return gcd; 

}