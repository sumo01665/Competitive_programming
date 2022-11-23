#include <bits/stdc++.h>

using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); 
                            cin.tie(nullptr); 
                            cout.tie(nullptr);
                            return false;}(); 
                            
                            
                            
int main() {
    int i = 26; 
    int  *p; 
    p = &i; 
    
    p  = new int;
    p = new int; //? This one will create the memory leaks 
    
    
    p = &i; 
    
    cout << "This is the p:" << p << endl; 
    cout << "1st i addr: " << &i << endl; 
    cout << "what located in p: " << *p << endl; 
    
    p = 0; 
    delete p; // ! for cases where: without using p = 0; 
              //* * free(): without pointer  
            //? Dangling pointer issues
    
    
    cout << "2nd i addr: " << p << endl;
    cout << "Something" << endl; 
    
     
    
    



    return EXIT_SUCCESS;
    
}