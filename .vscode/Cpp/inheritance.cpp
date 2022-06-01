#include <bits/stdc++.h>

using namespace std; 

#define LOG(x) cout << x << endl; 
#define TEXTLOG(x,y) cout << x << y << endl; 
template <class genType> 

class BaseClass{ 
public: 
    //? Constructor 
    BaseClass(){}
    void f (char *s = "unknown") {
        TEXTLOG("Function f() in BaseClass is called from", s); 
        h(); 
    }

protected: 
//? The variable can only access from the subset of the function
    void g(char *s = "unknown") {
        TEXTLOG("Function g() in BaseClass is called from", s); 
        
        
    }
    
private: 
    void h() {
        LOG("Funciton h() in BaseClass");
    }
};


int main(){
    BaseClass bc; 
    
    bc.h(); //*Output: 
    

}