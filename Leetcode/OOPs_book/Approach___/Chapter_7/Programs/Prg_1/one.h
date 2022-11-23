#ifndef ONE_H
#define ONE_H

#include <iostream> 
#include <cassert> 
using namespace std;

class One {
private: 
    int x, y; 
    
public: 
    One(int x ,int y);
    int getX() const; 
    int getY() const; 
};


#endif 