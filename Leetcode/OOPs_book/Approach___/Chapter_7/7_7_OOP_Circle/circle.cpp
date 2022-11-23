#include "circle.h"

Circle::Circle(double rds):radius(rds){ 
    if (radius < 0.0){ 
        assert(false); 
    
    }
}


//Default constructor
Circle::Circle():radius(0.0){


}


Circle::Circle(const Circle & circle):radius(circle.radius){ 
    

}

Circle::~Circle(){ 


}


void Circle::setRadius( double radius){ 
    this -> radius = radius;  

}

double Circle::getRadius() const{ 
    return radius; 

}

double Circle::getArea() const{ 
    
    return (PI * radius * radius); 

}

double Circle::getPerimeter() const{
    return (radius * 2 * PI);     

}
