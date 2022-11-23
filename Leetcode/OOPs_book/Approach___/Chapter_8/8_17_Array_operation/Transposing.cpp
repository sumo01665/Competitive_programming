#include <bits/stdc++.h>


using namespace std; 

const int ROW_SIZE = 5; 
const int COL_SIZE = 4; 


//****************************************
// Transposing
// 1 5 6 7          1 1 1
// 1 5 6 7   ==>    5 5 5
// 1 5 6 7          6 6 6
//                  7 7 7  
//**********************************

int main(){ 
    int arr[ROW_SIZE][COL_SIZE]; 
    int transposed_array[COL_SIZE][ROW_SIZE]; 
    for (int i = 0; i < ROW_SIZE; ++i){ 
        for (int j = 0; j < COL_SIZE; ++j){
            transposed_array[j][i] = arr[i][j]; 
        
        }
    
    }


}