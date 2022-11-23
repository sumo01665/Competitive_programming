#include <bits/stdc++.h>


using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 



int main(){ 
    fast_io;
    
    
    int i = 15, j, *p, *q;
    
    
    cout << j << endl; 
    p = (int*)i;
    cout << p << endl; //* 0xF
    p = &i; 
    
    cout << p << endl; 
    *p = 20; 
    cout << i << endl; 
    
    *p = 20; 
    j = 2 * *p;
    cout << "This is j: " << j << endl; 
    q = &i; 
    
    cout  << "This is q: " << q << endl; 
    
    *q = 25; 
    cout << "Updated i: " << i << endl;
    cout << "Updated p: " << p << endl;
    cout << "Updated q: " << q << endl; 
    
    
    
    
    return EXIT_SUCCESS; 


}