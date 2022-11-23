#include <bits/stdc++.h>


using namespace std; 

static auto fast_io = [](){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0); return false;}(); 




class classf{
public:
    // classf(){
    // }
    double operator() (double x){
        return 2 * x; 
    }

}; 

double sum2(classf f, int n, int m){
    double result = 0; 
    for (int i = n; i <= m; ++i){
        result += f(i);
    
    }
    return result; 
    

}

class classf2{
public: 
    classf2 (){ 
    }
    double run (double x){
        
        return 2 * x; 
    }
}; 

double sum3( classf2 f, int n, int m){
    double result = 0; 
    for (int i = n; i <= m; ++i){
        result += f.run(i); 
    }
    return result; 
}

// template <class T> 
// struct negate : public unary_function<T,T> {
//     T operator() (const T &x) const {
//         return -x; 
//     }

// };

template <class T> 

struct negate2 : public binary_function<T,T> {
    T operator () (const T & x) const { 
        return -x * 2;
    
    }
    
};

template <class F> 
double sum(F f, int n, int m){
    double result = 0; 
    for (int i = n; i <= m; i++){
        cout << result << endl; 
        result += f(i); 
        
    }    
    return result; 
}

int main(){
    classf cf; 
    cout << sum2(cf, 2, 5) << endl; 
    cout << sum2(classf(), 2, 5) << endl; 
    cout << sum3(classf2(), 2, 5) << endl; 
    
   cout << sum(negate2<int>(), 2,5) << endl; 
        
        
        
    return EXIT_SUCCESS; 
}   