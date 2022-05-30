#include <stdio.h>

int total;

int Square(int x){
    return x * x; 
    
}

int SquareOfSum (int x, int y){
    int z = Square(x + y); 
    return z; //(x + y)^2
    
}

int main() {
    int a = 4, b = 8; 
    total = SquareOfSum(a,b); 
    printf("Output = %d", total); 
    
    //Implementation in C
    //? Function
    /* 
    malloc
    calloc 
    realloc
    free
    */
    
    //Implementation in C++
    //? Operators
    /* 
    new 
    delete
    */
}