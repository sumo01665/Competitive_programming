#include <bits/stdc++.h>

using namespace std; 

static auto nums = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

int turn_off_right_most_bit(int nums){
    return (nums & (nums - 1)); 
    
}

int main(){
    int nums  = 24; 
    
    cout << (std::bitset<16>) nums << endl; 
    cout << (std::bitset<16>) (nums - 1) << endl; 
    cout << (std::bitset<16>) turn_off_right_most_bit(nums) << endl; 
    
    
    return EXIT_SUCCESS;


}