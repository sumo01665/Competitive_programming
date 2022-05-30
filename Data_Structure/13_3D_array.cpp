#include <bits/stdc++.h>
using namespace std; 

#define LOG(x) cout << x << endl;
#define TEXTLOG(y,x) cout  << y << x << endl;

//Passing multi-array function
//! Don't use **, it won't work
void Func(int *A){ //? Argument: 1-D array of integer
    
    
}

void Func2(int (*A)[3]){
    
    
}

void Func3(int A[][3]){

}

int main() {

int D[2][3];
    int C[3][2][2]; 
    int count = 0; 
    for (int i = 0; i < size(C); ++i){
     for (int j = 0; j < size(C[i]); ++j){
        for (int k = 0; k < size(C[i][j]); ++k){
            C[i][j][k] = count; 
            count++; 
        }
    }   
    }
    
    for (int i = 0; i < size(C); ++i){
     for (int j = 0; j < size(C[i]); ++j){
        for (int k = 0; k < size(C[i][j]); ++k){
            // cout << C[i][j][k] << "|"; 
            
        }
        // cout << endl; 
    }   
    // cout << endl; 
    }
    /* 
    Array interpretation: 
    0|1|
    2|3|
    
    4|5|
    6|7|

    8|9|
    10|11|
    
    In reality: 
    Address bar: 
    0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11
    */
    
    //? Another way to make the arrays are here: 
    int B[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,1},{11,13}}};
    printf( "%d %d %d %d \n", C, *C , C[0],&C[0][00]);
    printf( "%d %d %d %d \n", C, C + 1 , C[0][1],&C[1][1][1]);
    
    LOG(C[0][0])
    LOG(C[0] + 1)
    LOG(&C[0][0] + 1)
    LOG((*C + 1))
    
    LOG(C[0][1][1])
    
}