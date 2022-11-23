#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

//? Function prototype

void bits_transfer(int & nums); 
int turn_off_and_on_kth_bits(int nums, int k); 
int  bit_complimentation(int nums); 




//? Function 
int bit_complimentation(int digit){
    // cout << "Bit_complimentation: " << std::bitset<16>(1  << digit - 1)) << endl; 
    return ~(1 << (digit - 1)); 
}

int turn_off_and_on_kth_bit(int nums, int k){ 
    //* Set up the return value for the nums
    int num = 0; 
    int digit_complimentary = bit_complimentation(k); 
    
    
    
    // cout << "This is the digit-complimentary: "  << std::bitset<16> (digit_complimentary) << endl; 
    

    return (nums & digit_complimentary);
}

void bits_transfer(int & nums){ 
    
}

void decimal_transfer(bitset<16> & nums){
    
   
}


int main(){
   
    bitset<16> number = 24; 
    //? cout << number << endl; 
    //? General approach
    /* 
    return the value of the correct numbers of bits
    
    00000000101. If I want to turn off the 3rd bits, then 2^3. If I want to turn on the 23 bits
    
    
    */ 
    //? The requirement using <<, & and ~
    //* Review: << means left shift, & means and and ~ means not 
    
    /* 
    ? The goal of this code means that all of the values will be kept the same, while the one bits that needed to chaange 
    ? will look different at the end of the day 
    */
    
    int testing_number1 = 0; 
    int nums = 23;
    
    cout << bitset <16> (nums)<< endl; 
    cout << bitset <16> (turn_off_and_on_kth_bit(nums, 3))  << endl;  

} 