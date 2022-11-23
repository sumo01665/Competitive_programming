#include "two.h"

// Two::Two(int x, char a):x(x), a(a){ 



// }


Two::Two(int x, char a){ 
    this -> x = x; 
    this -> a = a; 
}



char Two::getA() const { 
    return this -> a; 
    
}

int Two::getX() const {
    return this -> x; 

}

void Two::setA(char a){
    
    this -> a = a; 
}


void Two::setX(int x){
    
    this -> x = x; 
}


