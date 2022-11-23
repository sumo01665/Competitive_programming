#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

//? Macros


//?Function 
string even_or_odd(int number){
    if (number  & 1) return "odd"; 
    else  return "even"; 
    
    
    
}

//? Main function
int main(){
    fast_io;
    cout  << even_or_odd(45) << endl; 
    cout << bitset<16>(1 << 1) << endl; 
    
    // URSEL = 1; 
    // UCSZ1 = 0;
    // UCSZ0 = 1; 
    // UCSRC = (2 << URSEL) | (1 << UCSZ1) | (2 << UCSZ0); 


}