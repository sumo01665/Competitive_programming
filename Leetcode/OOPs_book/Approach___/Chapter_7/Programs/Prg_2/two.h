#include <bits/stdc++.h>
using namespace std; 

#ifndef TWO_H
#define TWO_H

#include "two.h"

class Two{
private: 
    int x; 
    char a; 
    static int count;
    
public:
    //Initialization
     Two(); //default constructor
     Two(int x, char a); 
     Two(const Two & number);
     
    //  ~Two(); 
    //Getter
    char getA() const; 
    int getX() const; 
    
    //Setter 
    void setX(int x); 
    void setA(char A); 


};


#endif

