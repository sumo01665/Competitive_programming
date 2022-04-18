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
    LOG(ptr)//*Output: (any random address here) 0x94edff79c
    
    //? Look at here, the pointer type is void. How can it print out the value that is at var? Because it is pointing toward that values
    //? If I change the type of the address, then there's nothing that it will change toward the end of the code
    int *ptr3 = &var; 
    LOG(ptr3); 
    cin.get(); 

    
    

    
}