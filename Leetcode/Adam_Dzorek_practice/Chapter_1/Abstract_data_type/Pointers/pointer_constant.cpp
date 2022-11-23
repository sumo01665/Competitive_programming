#include <bits/stdc++.h>

using namespace std; 

void f1(int i, int * j, int &k){
    i = 1; 
    *j  = 2; 
    k = 3; 

}

int &f2 (int a[], int i){
    return a[i]; 
    
}

int *f3(int a[], int i){
    return &a[i]; 

}

class C{
public:
    int &getRefN() {
        return n; 
    
    }
    int getN(){ 
        return n; 
    
    }
    
private: 
    int n; 
    
}c; 

int main(){ 
    int n1 = 5, n2 = 10, n3 = 25; 

    const int *p = &n1; 
    int * const p3 = &n3; 
    int const *p2 = &n2; 
    
    p  = p2; 
    // *p = 25; //err: unmodified value
    // p3 = p; //err: espression must be modified value
    
    f1(n1, &n2, n3); 
    cout << n1 << ", " << n2 << ", " << n3 << endl; 
    
    int a[5] = {2,3,5,6,5}; 
    cout << f2(a,3) << endl; 
        
    *f3(a,3) = 5; 
    cout << a[3] << endl; 
   
   
    int & k = c.getRefN(); 
    k = 7; 
    cout << c.getN() << endl; 
    cout << c.getRefN() << endl; 
    
    c.getRefN() = 9; 
    // c.getN() = 9; 
    
    cout << c.getN() << endl; 
    cout << c.getRefN() << endl; 

    
    return EXIT_SUCCESS;      
    
    


}