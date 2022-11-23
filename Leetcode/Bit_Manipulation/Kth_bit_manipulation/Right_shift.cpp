#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return  false;}(); 

int main(){
     int tracking = 24;
    bitset<16>  whatever =16; 
    
    cout << bitset<16>(tracking)  << endl; 
    bitset<16> testing_number; 
    testing_number = 1 << tracking;
    bitset<16> testing_number2;
    testing_number2 = tracking  << 1;
    
    bitset<16> testing_number3;
    testing_number3 = tracking << 3;
    cout << "Second testing number:"  << testing_number2  << endl; 
    cout << "Third testing number: " << testing_number3 << endl; 
    
    cout << "First testing number: " << testing_number << "\n";
   
    
    
    



    return EXIT_SUCCESS;    





}