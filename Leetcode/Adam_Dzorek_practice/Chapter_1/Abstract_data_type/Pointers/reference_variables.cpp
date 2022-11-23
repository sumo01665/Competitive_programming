#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false;}(); 

int main(){ 
    fast_io; 
    
    int n = 5, *p = &n, &r = n; 
    cout << n << ", " << p << ", " << r << "." << endl; 
    //* 5 , address , 5
    n = 7;
    cout << n << ", " << p << ", " << r << "." << endl; 
        
    *p = 9; 
    cout << n << ", " << p << ", " << r << "." << endl; 
        
    r = 10; 
    cout << n << ", " << p << ", " << r << "." << endl; 

    int *const q = &n;
    
    //? Error: 
    r = q; 
    
    *r =  1;
    

}