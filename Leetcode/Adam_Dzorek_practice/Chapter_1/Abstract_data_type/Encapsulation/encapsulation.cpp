#include <cstring> 
#include <iostream> 

using namespace std;

template<class genType>





class genClass{
    genType storage[50]; 

};

class C {
    public: 
        /// @brief  
        /// @param s 
        /// @param i 
        /// @param d 
        C(char *s = "", int i = 0, double d = 1){
            strcpy(dataMember1, s);
            dataMember2 = i; 
            dataMember3 = d; 
    
    }
    void memberFunction1() {
        cout << dataMember1 << '  ' << dataMember2 << ' '
             << dataMember3 << endl; 
    
    }
    
    void memberFunction2( int i, char *s = "unknown"){
        dataMember2 = i;
        cout << i  << " received from " << s << endl; 
    
    }
    protected: 
        char dataMember1[20];
        int dataMember2; 
        double dataMember3; 
    
    
};

int main(){ 
    C object1("data", 20 , 35.5); 
    object1.memberFunction1(); 
    object1.memberFunction2(3, "Trist"); 



       
    
}