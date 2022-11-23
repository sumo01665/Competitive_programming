#ifndef ZELLER_H
#define ZELLER_H


#include <iostream> 
#include  <cassert>
#include "zeller.h"

using namespace std; 

//? Application: 0 -> Sunday ... 7 -> Saturday

class Zeller{ 
    int day, month, year;
public: 
    Zeller(); 
    Zeller(int d,int m, int y); 
    void print() const; 
    int weekday(); 
    
    

};


#endif 