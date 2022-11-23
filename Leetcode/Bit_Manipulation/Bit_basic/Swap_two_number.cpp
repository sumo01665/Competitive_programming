#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr ); return false;}(); 


void swap( int & n, int & m){ 
    n = n^m; //?  
    m = m ^n; 
    n = n^m; 



}

int main(){
    int m = 65, n = 75; 
    swap(m,n); 
    cout << "This is m: " << m << endl;
    cout << "This is n: " << n << endl; 
    
    
    
    
    
    
    
    // bitset<16> n = 1; 
    // bitset<16> m = 2; 
    // cout << "This is the n: " << n << endl; 
    // cout << "This is the m: " << m << endl; 
    // n = n ^ m;
    
    
    // cout << "XOR combination of n and m: " << n << endl;
    
    // m = n ^ m;
    // cout << "XOR combination of the new n and m: " << m << endl; 
    // n = n ^ m;
    // cout << "XOR combination of the new m and n: " << n << endl; 
    // cout << n << endl; 
    // cout << m << endl;
    

    
    
    // cout << (n ^ m)<< endl;
    // cout << (m ^ n) << endl;
     


}