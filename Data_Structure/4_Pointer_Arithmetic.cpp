//?Pointers arithmetic: Using the math to work with the pointers

#include <bits/stdc++.h>

using namespace std; 

int main() {

    int a = 15; 
    int* p = &a; 
    //? Can increment the sizeof the pointer that we use for the code
    // printf("Address of the pointer is: %d \n", p); //* (Address of a)
    // printf("Address of the second pointer is: %d \n", p+1); //* (Address from a increase by 1)
    // printf("This is the size of the memory allocation: %d \n", sizeof(a)); //* (sizeof(a))
    
    //? What about the value of the address
    printf("This is the value at the address p: %d \n", *p); //*Output: 15
    printf("This is the value at the address p + 1: %d \n", *(p+1)); //*Output: random number   
    
    
}