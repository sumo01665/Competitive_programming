
#include "one.h"
#include <bits/stdc++.h>



static auto fast_io = [](){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0); return false;}(); 

int main(void){ 
    fast_io; 
    //Initialization 
    int a = 5, b = 7;
    
    One one(a, b); 
    
    
    cout << "X: " << one.getX() <<  "\n"; 
    cout << "Y: " << one.getY() <<  "\n"; 

}