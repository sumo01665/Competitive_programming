//? Summary: Building the char array
// #include <bits/stdc++.h>

#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std; 

#define TEXTLOG(x,y) cout << x << y << endl;
#define LOG(x) cout << x << endl;
int main() {
    // We always need to have an extra character for the string
    char C[10]; 
    C[0] = 'T'; 
    C[1] = 'R'; 
    C[2] = 'I'; 
    C[3] = 'S'; 
    C[4] = 'T'; 
    //? If you uncomment this line, the character may read beyond this in some old compiler: 
    // C[5] = '\0'; //? This one indicates the null character that ends the arrays
    //! We need the string terminator for almost all of the program. 
    // printf("%s \n", C); 
    
    //? Checking the size of the array: 
    char CH[] = "Trist"; 
    //This is the same as:
    char CH1[] = {'T', 'R', 'I', 'S', 'T', '\0'}; 
    // LOG(strlen(CH1)); //*5  
    // TEXTLOG("Size of the CH array is: ",sizeof(CH)) ; //* 6
    // cout << "The length of the array CH is: " << strlen(CH) << endl; //* 5 

    //! Arrays and pointers are different types that are using in similar manner
    char C1[] = "Hello"; 
    char* C2; 
    C2 = C1; 
    LOG(C2[0]);
    C2[1] = 'D'; 
    LOG(C1); //*HDLLO 
    
    //! Arrays are always pass by reference
}