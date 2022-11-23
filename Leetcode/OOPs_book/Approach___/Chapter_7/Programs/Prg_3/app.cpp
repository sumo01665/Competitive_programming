#include "Cartesian.h"
#include <bits/stdc++.h>


using namespace std;


int main(){ 
    Point point1(0,0);
    Point point2(-3,4); 
    Point point3(point1); 
    Point point4(5,4); 
    
    cout << point2.distance(point1) << endl;
    cout << point2.position_relative(point1) << endl; 
    
    cout << point3.position_relative(point1) << endl; 
    cout << point4.position_relative(point2) << endl; 
    
    point2.print(); 
    point4.print();
}