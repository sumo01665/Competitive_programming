#include <bits/stdc++.h>

using namespace std;

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

//? Function prototype

int position_right_most_bit(int num){
    int count = 0; 
    int testing_number = (num & (-(num))); 
    
    cout << (bitset<16>)testing_number << endl; 
    while(testing_number != 0){
        ++count; 
        testing_number = testing_number >> 1; 
    
    }
    
    return count; 

}





int main(){
    fast_io; 
    
    int num_1 = 1;
    int num_2 = -1; 
    
    
    cout << (bitset<16>)num_1 << endl; 
    cout << (bitset<16>)num_2 << endl; 
    cout << (bitset<16>)24 << endl; 
    cout << position_right_most_bit(24) << endl; 
    return EXIT_SUCCESS;
    

}