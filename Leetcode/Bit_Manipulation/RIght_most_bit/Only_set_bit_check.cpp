#include <bits/stdc++.h> 


using namespace std;

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false;}(); 

//? Function prototype
int check_turn_off_bit(int nums){
    // cout << (nums & (nums - 1)) << endl; 
    if ( (nums & (nums - 1)) != 0) return -1; 
    else 
        return (log2(nums) + 1); 
    

    
    
}


int main(){ 
    
    int nums = 32; 
    
    
    
    cout << (bitset<16>)nums << endl; 
    // cout << (bitset<16>) check_turn_off_bit(nums) << endl; 
    cout << "The output for the nums: " << check_turn_off_bit(nums) << endl; 
    
    return EXIT_SUCCESS; 
}