#include <bits/stdc++.h>


using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 


//? Function prototype
void test_function(int  nums);
int bits_complimentation(int digit); 


int bits_complimentation(int digit){
    return ( 1 << (digit - 1)); 
}

int turn_on_kth_bits(int nums, int k){

    
    int digit = bits_complimentation(k);    
    
    return (digit | nums); 
    return 0; 
}




int main(){ 
    int nums = 24;
    int digit = 10; 
    
    int digit_checkup = 1 <<  (digit - 1);

    cout << std::bitset<16> (nums) << endl; 
    cout << std::bitset<16>( 1 << 0) << endl;
    // cout << std::bitset<16>  << endl; 
    cout << std::bitset<16> (bits_complimentation(digit)) << endl;
    cout << "This is the number 24: " << std::bitset<16> (nums) << endl; 
    cout << std::bitset<16> (turn_on_kth_bits(nums, digit))  <<endl;   

}