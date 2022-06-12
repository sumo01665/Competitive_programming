#include <bits/stdc++.h>

using namespace std; 


int main(){ 
    int n = 5, d =16, *p = &n, &r = n, *ptr = &d; 
    
    n = 8; 
    *p = 2;
    r = 20; 
    
    cout << "n" << "|" << "*p" << "|" << " r" << "| \n";
    cout << n << "| " << *p << "| " << r << "| \n";

}