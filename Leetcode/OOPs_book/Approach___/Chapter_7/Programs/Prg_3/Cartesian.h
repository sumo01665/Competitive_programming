#include <iostream> 
#include <cassert> 

using namespace std; 


#ifndef CARTESIAN_H
#define CARTESIAN_H
#include "Cartesian.h"

class Point{ 
private: 
    double x, y;     

public: 
    Point(double x, double y); 
    Point(const Point & p); //Copy constructor
    void print() const; 
    string position_relative(const Point & p); 
    //setter
    double distance(const Point & p); 
    
}; 


#endif