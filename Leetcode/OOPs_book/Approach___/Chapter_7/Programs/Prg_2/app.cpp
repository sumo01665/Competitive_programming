#include <bits/stdc++.h>
#include "two.h"

int main(){ 
    Two two(5, 'b');
    
    cout << "Two.getA(): " << two.getA() << endl; 
    cout << "Two.getx(): " << two.getX() << endl; 
    
    
    two.setA('D'); 
    two.setX(25); 
    
    cout << "Two.getA(): " << two.getA() << endl; 
    cout << "Two.getx(): " << two.getX() << endl; 
    


}