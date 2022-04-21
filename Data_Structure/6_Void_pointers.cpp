//? Summary: void pointers

#include <bits/stdc++.h>

using namespace std;


int main() {
    int a = 1024;
    int* p = &a;
    printf("This is address and the value at the integer pointer a: \n");
    printf("Address: %d, value: %d\n", p, *p);//* Address: (122), value: 1024
    printf("Address: %d, value: %d\n", p + 1, *(p + 1));//* Address: (126), value: (weird number)
    
    void* p0; 
    p0 = p; //? This is valid, because void can be anything that it is pointing toward
    //err: 
    printf("This is address and the value at the pointer a: \n");
    // printf("Address: %d, value: %d\n", p0, *p0);//! This is invalid for the value at the pointer p0, since you don't know 
                                                //! what value that you are talking to
    printf("Address: %d \n", p0); //* Address: (122)
    //? The compilation will give you the error, and assume that p0 + 1 will be 1 byte of memory 
    printf("Address: of p0 +1 is: %d \n", p0 + 1);//? Invalid: because you don't know the type of the pointer you are looking at
    
    
    
}