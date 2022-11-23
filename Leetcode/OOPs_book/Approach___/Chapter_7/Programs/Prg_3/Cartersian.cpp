#include "Cartesian.h"
#include <bits/stdc++.h>

Point::Point(double x, double y):x(x),y(y){ 


}


Point::Point(const Point & p):x(p.x),y(p.y){

}

void Point::print() const { 
    cout << "(" << x << ", " << y << ")" << endl; 


}


string Point::position_relative(const Point & p){ 
    string a = ""; 
    
    //Same position 
    if (p.x == this -> x && p.y == this -> y){ 
        return "Same point"; 
    
    }
    
    //X-direction position 
    if (p.x > this -> x){ 
        
        a  += "left"; 
    
    }
    else if (p.x < this -> x) { 
        cout << "p.x: " << p.x << "| This-> x: " <<this-> x << endl; 
      a += "right";
      
    }
    else{}
    
    //Nothing in string
    if (a != ""){ 
        a += ", "; 
    }

    
    
    //Y direction position 
    
    if (p.y > this -> y){ 
    
        a  += "below"; 
    
    }
    else if (p.y < this -> y){ 
    
        a  += "above"; 
    
    }
    else { 
      
      a = a.substr(0, a.size()-2);
      a += " ";
      
    }
    
    return a; 
    
}



double Point::distance(const Point & p){
    return sqrt(pow(p.x - this -> x, 2) + pow(p.y - this -> y, 2));

}

