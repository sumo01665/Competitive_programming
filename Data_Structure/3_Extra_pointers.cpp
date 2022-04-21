//? Summary: Predicting the pointers output

#include <bits/stdc++.h>

using namespace std;
//Macros
#define LOG(x) cout << x << endl;


//Functions

//Main functions

int main() {
    int a  = 6; 
    int *p; 
    p = &a;
    
    // LOG(p) //*Output: (address of a)
    // LOG(*p) //*Output: 6
    // LOG(&a) //*Output: (address of a)
    // LOG(&p) //*Output: (address of the pointers)
    
    //? Without specialization
    int b; 
    int *p1; 
    p1 = &b; 
    // LOG(b)//*Output: 0
    // LOG(*p1); //*Output: 0
    // LOG(p1); //*Output: (address of b)
    
    //? Changing the value through the pointers
    int c = 5; 
    int *p2; 
    p2 = &c; 
    *p2 = 68; 
    LOG(c) //* 68
    

}