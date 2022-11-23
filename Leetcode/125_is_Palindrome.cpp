#include <bits/stdc++.h> 

using namespace std; 


static int fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 
//Function which stripes out letters
string stripe_function( string input){ 
     if(isalnum(input) == 1){
        
        
        
     }; 


}
bool isPalindrome(string s) {
        if (s.length() == 1 || s.length() == 0 ) //? Base cases
        {
            return true; 
        }
        if (s[0] == s[s.length() - 1]){ 
            
            return isPalindrome(s.substr(1, s.length() - 2)); 
            cout << s << endl; 
        
        }
        return false; 
        
}

int main(){
    string words = "dcabacd"; 
    cout << words.substr(1, words.length() - 2) << "\n"; 
    
    cout << boolalpha << isPalindrome(words) << endl; 
}