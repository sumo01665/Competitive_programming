#include <bits/stdc++.h>

using namespace std; 
#define PI 3.14159

class Circle
{
private: 
    double radius; 
    
public: 
    //? Constructor 
    Circle(double rds); //Parameter Constructor
    Circle(); //Default Constructor
    Circle(const Circle &circle_ref); //Copy Constructor
    
    //? Destructor
    ~Circle(); 

    double getRadius() const; 
    double getArea() const; 
    double getPerimeter() const; 
    void setRadius(double value); 
};

//? Function attribution 
double Circle::getRadius() const{ 
    return radius; 

}

double Circle::getArea() const{ 
    return radius * radius * PI; 

}

double Circle::getPerimeter() const{ 
    return radius * 2 * PI; 

}

void Circle::setRadius(double value){ 
    radius = value; 

}

//param constructor
Circle::Circle(double rds):radius(rds){ 
    this -> radius = rds; 

}

//dflt constructor
Circle::Circle():radius(1.0){}; 

//copy constructor 
Circle::Circle(const Circle & circleref):radius(circleref.getRadius()){}

//Destructor 
Circle::~Circle(){ 

}

int main(){ 
    Circle c1; 
    
    c1.setRadius(5); 
    // cout << "This is the area: " << c1.getArea() << endl; 
    // cout << "This is the perimeter: " << c1.getPerimeter()  << endl; 
    // cout << "This is the radius:  " << c1.getRadius() << endl; 
    
    Circle c2(10);
    Circle c3; 
    Circle c4(c1); 
    
    cout << "C4 rad: " << c4.getRadius() << endl; 
    cout << "C3 rad: " << c3.getRadius() << endl; 
    cout << "C2 rad: " << c2.getRadius() << endl; 
    
}