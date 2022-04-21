#include <bits/stdc++.h> 
using namespace std;

//Macros
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define LOG(x) cout << x << endl;

int main(){
    void* ptr0 = 0; //? Pointer is just an address 
    //? We are giving a memory address of 0. memory address of 0 is invalid. 0 is not a valid address, so we can't write it 
    //? at 0. Pointer is valid to assign invalid value into pointers
    
    //*Alternatives way to write invalid pointer
    void* ptr1 = NULL; //? It is just a #define for __null or 0
    void* ptr2 = nullptr; //? Introducing in C++ 11
    
    //* Example: 
    int var = 6; 
    void *ptr = &var; //? Ampersand means where are you? What is your memory address?  
    //? ptr variables right now is holding the memory address of the var variable
    // LOG(ptr)//*Output: (any random address here) 0x94edff79c
    
    //? Look at here, the pointer type is void. How can it print out the value that is at var? Because it is pointing toward that values
    //? If I change the type of the address, then there's nothing that it will change toward the end of the code
    int *ptr3 = &var; 
    
    // double *ptr4 = &var; //Err: This will cause a little of the trouble, since the value we are looking at having 4 bytes instead of 8 bytes
    //? However, we can also do something like this:
    double *ptr4 = (double*)&var; 
    // LOG(ptr3); 
    LOG(ptr4); 
    
    //Takeaway: The value of each address here is the same as the first one. This means that: 
    //? The type doesn't matter with the memory address it needs to run on. 
    //? Question to ask for the type of the pointers: How many bytes do you want your integer to run on?
    
    
    //! Type job:
    //? Useful for the manipulation of the memory
    
    //? How to write to/read from the data. Pointers know where the data is, what about changing what the data is: 
    
    //feat: Dereferencing data
    //*Example: Dereferencing the data syntax: *ptr 
    // (*ptr) = 10; //Err: This will cause the error because the ptr that we set that points toward the value is a void pointer
    
    //*example: 
    int *ptr5 = &var;
    *ptr5 = 10;  
    LOG(ptr5); //? The address is still the same, however, the value of var is different
    LOG(var); //*Output: 10 
    
    
    //Another example for the VSCode
    char* buffer = new char[8]; //? The pointer here is pointing to the beginning of the data (since the char pointer has only 1 byte, it will go toward the values that it needs to)
        
    memset(buffer, 0, 8);
    //? Pointers to the pointer
    char** pointer = &buffer; 
    LOG(pointer); //*Output: 0x98e6dff8b0 
    //? It is a different pointer, but it is running reversely on where to find the pointer
    //? So if you want to find buffer address, you go backward with the memory address: 0b8ffd6e, This will be the place where the value is 00 00 00 00 at the time we are speaking
    // delete[] buffer;//? Since it is allocate the arrays outward, it is beneficial to have the values to be going outward 
        
    // cin.get();      

    
    

    
}