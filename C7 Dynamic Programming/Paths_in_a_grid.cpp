// ? Summary: Paths in a grid
    // - Find a path from the upper-left corner to the lower-right corner of an n x n grid, such that we only move down and right
    // - Each square contains a positive integer and the path should be constructed so that the sum of the values along the path is as large as possible

#include <bits/stdc++.h>
using namespace std; 

// Macros
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long LL; 
typedef unsigned long long ULL; 

//Global variables
int N = 5; 
// Function 
    //feat: Function prototype
int square (int y, int x){
    //? This function gives the rows and columns of the grids, and value[y][x] equals to the value of this function 
    return 0; 
}
    
//Function 
int sum(int y, int x){
    //? sum(n,n) tells us the maximum sum from the upper-left corner to the lower-right corner
    
    // Here is one possible way to solve for this: sum(y,x) = max(sum(y,x-1), sum(y-1,x)) + value[y][x]
    int value[N][N]; //? This value is taken from the square function 
    int sum[N][N]; 
    for (int y = 1; y <= N; y++){
        for (int x = 1; x <= N; x++){
            sum[y][x] = max(sum[y][x-1], sum[y-1][x]) ; //* This value is taken from the square function: + value[y,x]; 
            
        }
        
    }
    return sum[y][x]; 
}    

// Template

// Main
int main() {
    

}