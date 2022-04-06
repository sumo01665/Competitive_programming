//? Description: Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight)
#include <bits/stdc++.h>

using namespace std;
//Macros

// Global variables

//Function 
int hammingWeight(uint64_t n) {
   int counter = 0;
   while (n){
    if(n&1 == true) {
        
       counter++; 
       
       
   }  
        cout << "This is n now: " << n << endl; 
        n = n>> 1; 
   }
     
   
   return counter; 
}

int hammingWeight2(uint32_t n) {
    int count = 0; 
    
    while (n){
        n &= (n - 1); 
        count++;
        
    }
    return count; 
    }

//feat: Easiest to understand solution
int hammingWeight3(uint32_t n) {
    int count = 0; 
        while(n != NULL){
            if (n % 2 == 1){
                count++; 
            }
            n /= 2; 
        }
        return count;    
    }

//feat: A few one-liner
int hammingWeight4(uint32_t n) {
    return n ? 1 + hammingWeight4(n & (n - 1)) : 0; 
}
    
//feat: Built-in function 
int hammingWeight5(uint32_t n) {
    return __builtin_popcount(n); 
    
    
}
//Template
/* 
int hammingWeight(uint32_t n) {
        
    }


*/
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 
    static uint64_t n = 00000000000001100000000000001011; //? The solution here maybe converted, but the code is still run with the bit in mind
    cout << hammingWeight(n) << "\n"; //*Output:
}