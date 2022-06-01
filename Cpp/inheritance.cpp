#include <bits/stdc++.h>

using namespace std; 

// template <class genType> 
#define TEXTLOG(x,y) cout << x << y << endl; 
#define LOG(x) cout << x << endl; 



class BaseClass{
public: 
    BaseClass(){}
    
    void f(char* s = "unknown"){
        TEXTLOG("Function f(x)in Base Class will print: ", s); 
        h(); 
    }
    
protected: 
    void g(char* s = "unknown"){
        TEXTLOG("Function g(x) in Base Class will print: ", s); 
    }

private:    
    void h(){
     LOG("Function h(x) in Base Class is printed"); 
    
    }
    
};

class Derived1Level1 : public virtual BaseClass{
public: 
    void f(char* s  = "unknown"){
        TEXTLOG("Function f(x) in Derived1Level1 will print: ", s); 
    g("Derived1Level1");
    h("Derived1Level1"); 
    }
    //can't access the g and h from outside the scope
    
    void h(char* s = "unknown"){
        TEXTLOG("Function h(x) in Derived1Level1 will print: ", s); 
    }
}; 
class Derived1Level2 : public virtual BaseClass{
public: 
    void f(char* s = "unknown"){
        TEXTLOG("Function f(x) in Derived1Level2 will print: ", s); 
        g("Derived1Level2"); 
        // h(); //err: This will cause the error for the code since h() is unaccessible 
                
    }; 
};

class Derived2Level2 : public Derived1Level1, public Derived1Level2 {
public: 
    void f(char *s  = "unknown"){
        TEXTLOG("Function f(x) in DerivedLevel2 will print: ", s); 
        g("Derived2Level1"); 
        Derived1Level1::h("Derived Level 1"); 
        BaseClass::f("DerivedLevel2"); 
        // BaseClass:f("DerivedLevel2"); 
        //? Putting the two last code here will cost it recursively
    }

};


int main(){
    BaseClass bc;
    // bc.f("Base Class"); 
    //*Output: 
    /* 
    Function f(x)in Base Class will print: unknown
    Function h in Base Class is printed
    */
    //Unable to compile the following
    // * bc.g(); 
    // * bc.h(); 
    
    Derived1Level1 d1l1; 
    // d1l1.f("Derived1Level1"); 
    // d1l1.h(); 
    // d1l1.g("Derive1Level1");
    
    //? I didn't do derivedLevel2 since it is quite trivial
    
    
    //* derivedLevel2
    Derived2Level2 dl2; 
    dl2.f("DerivedLevel2"); 
    dl2.h("DerivedLevel2"); 
    return 0; 
}