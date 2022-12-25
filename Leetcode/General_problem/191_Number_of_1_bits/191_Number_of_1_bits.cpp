#include <bits/stdc++.h>  
 using namespace std;  
  
  int hammingWeight(uint32_t n) {
        int count = 0; 
        while(n != NULL){
            if (n % 2 == 1){
                count++; 
            }
            n /= 2; 
        }
        return count; 
    }
    
int main(){ 


}    