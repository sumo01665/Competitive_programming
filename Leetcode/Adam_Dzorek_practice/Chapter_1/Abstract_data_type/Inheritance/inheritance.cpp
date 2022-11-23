#include <bits/stdc++.h>

using namespace std;

class BaseClass{ 
public:
    BaseClass() { }
    void f (char *  s = "unknown"){
        cout << "Function f() in BaseClass called from " << s << endl; 
        h(); 
        }
protected:
        void g (char *s  = "unknown"){ 
        cout << "Function g() in BaseClass called from " << s << endl; 
        
        }    
private: 
        void h(){
        cout << "Function h() in BaseClass\n"; 
        
        }

}; 

class DerivedLevel1 : public virtual BaseClass{ 
public: 
    void f(char* s = "unknown"){
        cout << "Function f() in Derived1Level1 called from " << s << endl; 
        g("DerivedLevel1"); 
        // h("DerivedLevel1"); 
    
    }

};


int main(){ 
    // const const int pointer = 5; 
    cout << pointer << endl; 


}