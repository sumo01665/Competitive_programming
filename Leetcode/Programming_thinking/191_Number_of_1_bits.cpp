//? Description: Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight)
#include <bits/stdc++.h>

using namespace std;
//Macros

// Global variables

//Function 
int hammingWeight(uint32_t n) {
   int counter = 0;
   int  i = 0; 
   while (i == 32){
    if(n % 10 == 1) {
       counter++; 
       
       n /= 10; 
   }  
   else {
    n/=10; 
   }
   i++; 
   }
     
   
   return counter; 
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
    
    cout << hammingWeight(00000000000001100000000000001011) << "\n"; //*Output:
}