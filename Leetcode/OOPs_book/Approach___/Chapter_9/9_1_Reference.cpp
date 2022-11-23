#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false;}(); 

int main(){ 
    int score = 92; 
    int &rScore = score; 
    int num = 80; 
    rScore = num;
        
    cout << rScore << endl;     
    cout << "rScore: " << rScore << endl; 
    cout << "num: " << num << endl; 
    cout << "&rScore: " << &rScore << endl; 
    cout << "&num: " << &num << endl; 
    cout << "&score: " << &score << endl; 
    
 
}