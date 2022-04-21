//? Summary: Pointer to pointer
    // Using the idea that the pointer is also stored in the same byte as it declares, there will be the memory address
    // that contain that kind of pointers. In this case, we are using pointers to point toward a data memory and we'll 
    // then modify that data from there
#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout << x << endl; 
#define TEXTLOG(a,b) cout << a << b << endl; 
int main() {
    int x = 5; 
    int *p = &x;
    int **q = &p;
    int ***r = &q; 
    
    TEXTLOG("Value of the address of p is: ", p );
    TEXTLOG("Value of the address of q is: ", q );
    TEXTLOG("Value of the address of r is: ", r );
    TEXTLOG("Value of the address of the address of q is: ", **q); //* 5
    TEXTLOG("Value of the address of the address of q is: ", *(*q)); //* 5 
}