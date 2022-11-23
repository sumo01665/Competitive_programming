#include <bits/stdc++.h>


using namespace std; 


//? Function prototype
void test_function(int n);
int bits_complimentation(int nums);


int bits_complimentation(int digit){
    return ( 1 << (digit - 1)); 


}


int turn_on_off_kth_bit(int nums, int digit){ 
    int complimentary_bit = bits_complimentation(digit); 
    
    return (nums ^ complimentary_bit); 


}


int main(){ 
     int nums_1 = 23; 
     int nums_2 = 25; 
     int nums_10 = 45; 
     
     
     int digit = 3; 
     
     //? Digit manipulation
     cout << (std::bitset<16>) nums_1 << endl;  
     cout << (std::bitset<16>) bits_complimentation(digit) << endl; 
     
     cout << (std::bitset<16>) turn_on_off_kth_bit(nums_1, digit ) << endl; 
     
     
     








}