#include <bits/stdc++.h>

using namespace std;

#define LOG(x) cout << x << endl; 
#define TEXTLOG(x,y) cout << x  << y << endl; 
int main() {
    int B[2][3]; 
    int count = 0; 
    for (int i = 0; i < size(B); ++i){
        for (int j = 0; j < size(B[i]); ++j){
            B[i][j] = count; 
            count++; 
            // cout << B[i][j] << "|"; 
        }
        // cout << "\n"; 
    }
    //Array population: 
    /* 
    ? 
    Array: B[2][3]
    *        0|1|2|
    *        9|4|5|
    
    Address assumption: 
    *       100|104|108
    *       112|116|120
    */
    B[1][0] = 9; 
    //Practicing getting the address of each array
        //? Accessing the biggest array location 
    TEXTLOG("This is the biggest array of all: ", &B); //*(100)
    TEXTLOG("This is the address of the next biggest array: ", &B + 1) //*(124)
    TEXTLOG("This is the address of the next two arrays: ", &B + 2) //*(148)
    TEXTLOG("The previous location of the array is: ", &B - 1) //*(76)
    LOG("")
    //? Accessing each row inside the array
    TEXTLOG("This is the first row arrays location: ", *(&B)) //*(100)
    TEXTLOG("This is the first row arrays location: ", &(*B)) //*(100)
    TEXTLOG("This is the first row arrays location: ", B) //*(100)
    TEXTLOG("This is the first row arrays location: ", &B[0]) //*(100)

    LOG("")
    LOG(B[0][0]) //*
    LOG("")
    TEXTLOG("This is the second row arrays location: ", B + 1) //*(124)

    TEXTLOG("This is the second row arrays location: ", (*(&B)) + 1) //*(124)
    
    //! Difference between location of element and inside the array
    LOG("")
    TEXTLOG("This is the location of the second blocks of the arrays B[0]", B + 1);
    TEXTLOG("This is the first row arrays location: ", B[0]) //*(100)
    TEXTLOG("This is the first row arrays location: ", &B[0][0]) //*(100)
    TEXTLOG("This is the first row arrays location: ", *B) //*(100)
    LOG("")
    TEXTLOG("This is the second element of the arrays: ", *B + 1) //*(104)
    TEXTLOG("This is the location of the second element of the first rows of arrays: ", &B[0][0] + 1) //*(104)
    TEXTLOG("This is the second element of the arrays: ", B[0] + 1) //*(104)
    
    LOG("")
    TEXTLOG("This is the second row arrays location: ", B[1]) //*(124)
    TEXTLOG("This is the second row arrays location: ", &B[1][0]) //*(124)
    //? Accessing each element inside the array
    LOG("");
    
    TEXTLOG("I wonder what this is: ", *(B + 2)) 
    
    //*Example: Printing out the last elements of the array
    //err: 2, 3
    // TEXTLOG("Here is your 5: ", B[2][3]) 
    TEXTLOG("Here is your 5: ", B[1][2])
    TEXTLOG("Here is your 5: ", *(*(*(&B) + 1) + 2));
    cout << "Here is your 5: " << *(*(*(&B + 1)) - 1) << endl;
    TEXTLOG("Here is your 5: ", *(*(&(B[0]) + 1)+ 2)); 
    TEXTLOG("Here is your 5: ", *(B[1] + 2));
    TEXTLOG("Here is your 5: ", B[0][5])
    TEXTLOG("Here is your 5: ", B[1][2]) 
    TEXTLOG("Here is your 5: ", *(&B[0][6] - 1)) 
    TEXTLOG("Here is your 5: ", *(&B[0][2] + 3)) 
    // cout << B << endl; //*(110) 
    // cout << B[0] << endl; //* (110)
    // cout << B + 1 << endl; //* (134)

   /*  B[0] = 1; 
    B[1] = 2;
    //? Compilation error: B will return a pointer to 10D array of 3 int
    */
    
    // ! int* p = B; //err: This will cause the compilation error: because it is thought to point at 1-D array of 3 integers
    
    //! The type of a pointer matters when you dereference or when you perform the pointer arithmetic
    
    int (*p)[3] = B; 
    //Address of the whole B
    // LOG(&B) //* (112)
    
    
    // LOG(B); //* (112)
    // LOG(*(&B)) //* (112)
    // LOG(&B[0]) //* (112)
    // //? Same things (They are the address of the first bit)
    // LOG(B[0]) //* (112)
    // LOG(&B[0][0]) //* (112)
    // LOG(*B) //* (112)
    
    // //? Visiting the second bits of the arrays
    // LOG("")
    // LOG(B+1) //*(124)
    // LOG(&B[1]) //*(124)
    
    // //? Returning the int pointer
    // LOG(*(B+1)) //*(124)
    // LOG(B[1]) //*(124)
    // LOG(&B[1][0]) //*(124)
    
    // //? Going into the third elements of the second rows
    // LOG("")
    // LOG(&B[1][2]) //*(132)
    // LOG(*(B + 1) + 2) //*(132)
    // LOG(B[1] + 2) //*(132)
    
    
    
}