//? Summary: Understanding pointers with arrays


#include <bits/stdc++.h>

using namespace std;


#define LOG(x) cout << x << endl; 
#define TEXTLOG(x,y) cout << x << y << endl;


int main() {
    int A[] = {2,3,3,5,6};
    int n = sizeof(A)/sizeof(A[0]);
    int arraySize = sizeof(A);
    TEXTLOG(arraySize, " bytes"); 
    TEXTLOG("The address of the array A is: ", A);
    TEXTLOG("The address of the second element of the array is: ", A + 1); 
    TEXTLOG("The address of the fifth element of the array is: ", A + (n-1)); 
    // TEXTLOG("The first value of the array A is: ", *A); 
    // TEXTLOG("The second value of the array A is: ", *(A+1));  
    for (int i = 0; i < n; ++i){
        // LOG(A[i]); 
        
    }
    
    int B[] = {2,3,3,5,6};
    TEXTLOG("The address of the array B is: ", B);
    TEXTLOG("The address of the first element of the array B is: ", &B[0]);
    TEXTLOG("The address of the second element of the array B is: ", &B[1]);
    TEXTLOG("The address of the third element of the array B is: ", &B[2]);
    //? Can change the assign value for the variables position
    
    int* p; 
    p = A; 
    // A++; //! Error here: The array can't not increase by itself
    p++; //todo: This is how to make it
    cout << p << endl; //*Output: The address where you store the second value of the A array
    

}