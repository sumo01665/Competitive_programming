//? Summary: Understanding how to implement a pointer in C++

#include <bits/stdc++.h>
using namespace std; 


int main(){
    //? Address-of operator: &
    /* 
        Use the ampersand sign, that would assign the address of variable from one to another
        
    */
    
    //? Deference of operator: *
    /* 
    A variable with store the addressof another variable is called a pointer
    
    */
    
    int myVar = 24; 
    int* foo = &myVar; 
    int bar = myVar; 
    
    // ? & is the address-of-operator, can be read as "address of"
    // ? * is the dereference operator, can be read as "value pointed to by"
    
    //* So a quick example here:
    //The first pointer
    int firstValue, secondValue; 
    int * myPointer; 
    
    myPointer = &firstValue; 
    *myPointer = 10; 
    // cout << myPointer << "\n"; //*Output: (an address) (1)
    // cout << &myPointer << "\n"; //*Output: (another address) (2)
    // cout << &firstValue << "\n"; //*Output: (an address) (similar to (1))
    // cout << firstValue << "\n"; //*Output: 10
    
    myPointer = &secondValue; 
    *myPointer = 20; 
    
    // cout << "This is the first value: " << firstValue << endl; //*Output: 10
    // cout << "This is the second value: " << secondValue << endl; //*Output: 20
    //? Notice that even though neither firstvalue nor second value are directly set any value in the program, both end up with a value set indirectly through the use of my pointer
    
    
    //*Second example
    int firstvalue = 5, secondvalue = 15; 
    int *p1, *p2; 
       
    p1 = &firstvalue; 
    *p1 = 10; 
    
    // cout << firstvalue << endl; //*Output: 10
    
    //? Arrays example using generic one
    int numbers[5]; 
    int *p = 0; 
    p = numbers; 
    *p = 10;
    p++; *p = 20; 
    p = &numbers[2]; *p = 30; 
    p = numbers + 3; *p = 40; 
    p = numbers; *(p + 4) = 50;
    int n = sizeof(numbers)/sizeof(numbers[0]); 
    for (int i = 0; i < n; i++){
        // cout << numbers[i] << "|"; //*Output: 
        
    }
    
    //? Pointer arithmetics
    char *myChar; 
    
    short *myshort;
    ++myChar;
    ++myshort; 
    
    cout << *myChar << endl; 
    cout << myChar << endl; 
}