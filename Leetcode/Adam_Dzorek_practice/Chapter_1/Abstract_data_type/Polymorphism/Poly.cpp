#include <bits/stdc++.h>

using namespace std; 


static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false;}(); 

class Class1{
public:
    virtual void f(){
        cout << "Function f() in Class1 \n";
    
    }
    void g(){ 
        cout << "Function g() in Class1 \n"; 
    
    
    } 

};


class Class2 {
public:
    virtual void f(){ 
        cout << "Function f() in Class2 \n";
    }
    void g(){ 
        cout << "Function g() in Class2 \n"; 
    
    }

};

class Class3{
public: 
    virtual void h(){ 
        cout << "Function h() in Class3 \n";
    }

}; 


int main(){ 
    fast_io; 
    Class1 object1, *p; 
    Class2 object2;
    Class3 object3; 

    p = &object1;
    p -> f(); 
    p -> g(); 
    p = (Class1*) &object2;
    
    p -> f(); 
    p -> g();
    p = (Class1*) &object3; 
    
    // p -> f(); 
    p -> g();
        // p -> h(); //Err: h() is not a member
        
        
    return EXIT_SUCCESS;     
}