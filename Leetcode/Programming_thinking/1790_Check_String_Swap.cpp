//? Description 
/* 
You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

*/
#include <bits/stdc++.h>

using namespace std; 
static int fast_io = [](){ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0;}(); 


//Functions
//err: Wrong approach
bool areAlmostEqualError(string s1, string s2) {
    if (s1.length() != s2.length()){
        return false; 
    }
    int count = 0; 
    map <int, int> m1; 
    for (int i = 0; i < s1.length(); ++i){
        if (i == s1.length() - 1){
            if (s1[i] == s2[0] || s1[0] == s2[i]){
                count++; 
                
            } 
            
        }
        if(s1[i] == s2[i + 1] || s2[i] == s1[i + 1]){
            count++; 
        }
        cout << "This is the current count: " << count << endl ;
        
    }
    if (count == s1.length()) return true; 
    return false; 
}
bool areAlmostEqual(string s1, string s2) {
    map <string, int> m;
    if (s1.length() != s2.length()){
        return false; 
    }
    for (int i = 0; i < s1.length(); ++i){
        m.insert(make_pair( s1[i], i)); 
    
    }
    if (m.find("b") == m.end()){
        cout << "Yo" << endl; 
    }
    return false;
}
/* 
Brainstorm 
    if the string is at the last position, then you can minus the whole length and move it to the first letter
     

*/
//Template
/* 
bool areAlmostEqual(string s1, string s2) {
    
}
*/

int main(){
    string s1 = "bank"; 
    string s2 = ""; 
    cout << areAlmostEqual(s1,s2); 
}