#include <bits/stdc++.h>

using namespace std; 


static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

string convert_lowerCase_upperCase(char character){

    return char(character | '' ); 
}



int main() {
    fast_io; 
    cout << convert_lowerCase_upperCase('D') << endl; 
    
}