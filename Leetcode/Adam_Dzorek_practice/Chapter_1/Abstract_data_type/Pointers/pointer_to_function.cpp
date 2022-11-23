#include <bits/stdc++.h>

using namespace std;

double f(double x){
    return 2 * x; 

}
/// f is the pointer to the function f() 
/// *f is the function itself
/// (*f)(7) is a call to the function 
double sum (double (*f)(double), int n, int m){
    double result = 0; 
    for (int i = n; i <= m; ++i){
        result  += f(i);     
    }
    return result; 

}

double square (double number){ 
    return pow(number, 2); 


}

double root (double (*f) (double), double a, double b,double epsilon){
    double middle = (a + b) /2; 
    while(f(middle) != 0 && fabs(b - a) > epsilon){
        if (f(a) * f(middle)  < 0)
            b = middle; 
        else a = middle; 
        middle = (a + b)/2; 
    }
    return middle; 


}


int main(){ 
    cout << sum(f, 2,  5) << endl;    
    
    cout << sum( sin,3,7) << endl;  
    
 
    cout << root(square, 1,5, 0.005); 
    return EXIT_SUCCESS;
}