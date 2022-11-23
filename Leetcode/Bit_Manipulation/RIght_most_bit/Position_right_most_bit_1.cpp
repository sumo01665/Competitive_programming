#include <bits/stdc++.h>

using namespace std;


static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

int bit_complimentation(int nums){

    return (nums & (nums - 1)); 

}

int position_right_most_bit(int nums){
    if (nums == 0) return 0; 

    int bit_compliment = bit_complimentation(nums); 
    int count = 0; 
    
    int comparable_number = (nums & bit_compliment); 
    
    cout << (std::bitset<16>)comparable_number << endl;
    
    int right_most_only_number = (comparable_number ^ nums); 
    
    cout << (std::bitset<16>)right_most_only_number << endl; 
    
    while (right_most_only_number != 0){
        cout << "Something happens here: " << endl;
        right_most_only_number = (right_most_only_number >> 1); 
        count++; 
    
    }
    return count; 
    
    

}

int short_version_implementation( int nums){
    int count = 0; 
    int implementation = ((nums & (nums - 1)) ^ nums); 
    while((nums & (nums - 1)) ^ nums){
    count++; 
    implementation = implementation >> 1; 
    }
    
    return count; 
    
    

}


int main(){
    int nums = 24; 
    int nums_2 =  25; 
    
    
    cout << ((bitset <16>) nums) << endl; 
    cout <<  position_right_most_bit(nums) << endl; 
    return EXIT_SUCCESS;
}