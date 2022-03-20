#include <bits/stdc++.h>
// #define for(c, x) for (int i=c; i<=x; i++)
#define LLtype long long
using namespace std; 

int main(){
    
    //feat: int (-2^31 ... 2^31-1 or about -2*10^9 ... 2 * 10^9)
    // int x = 123456789123456789; //*Output: warning: overflow in conversion from 'long long int' to 'int' changes value from '123456789123456789' to '-1395630315' [-Woverflow] 
    // long long x = 123456789123456789LL; 
    // printf("%d \n", x); //*Output: -1395630315
                         //This one is pretty weird. Why? Because there is no format specifier for long long in C11
    // printf("%lli \n", x); //*Output:-1395630315                   
    // cout << x << "\n"; //*Output: 123456789123456789
    
    // int a  = 123456789; 
    // long long b  = a * a; 
    // cout <<  b << "\n"; //*Output: -1757895751
    //? If a and a is still integer, the value of the multiplication will be type int, which is not long long. Hence, the result is wrong
    
    //? So to stop the problem 
    //? LL here is defined as long long 
    // LLtype b = (LLtype)a*a;
    // cout <<  b << "\n"; //*Output: 15241578750190521 //Which is the right answer
    //? Special application: g++ provides a 128-bit type __int128_t with a range of -2^127 ... 2^127 - 1 or about -10^38 to 10^38 
    
    //feat: Modular arithmetic 
    /* 
    (a + b) mod m = (a mod m + b mod m) mod m
    (a− b) mod m = (a mod m − b mod m) mod m
    (a· b) mod m = (a mod m · b mod m) mod m
    */
    
    //*Example: calculating n! modulo m: 
    //? Code prototype: 
    /* 
    
    *long long x = 1;
    *for (int i = 2; i <= n; i++) {
    *    x = (x*i)%m;
    *}
    *cout << x%m << "\n";

    */
    long long x = 1; 
    int m = 4, n = 3; //? In this example, the number we're using right now is n!, which is 3 * 2 * 1, and the remainder is 4 
                      //? 3 * 2 * 1 = 6, and 6/4 has the remainder of 2
    for(int i = 2; i <= n; i++){
        x = (x*i)%m; 
    }
    // cout << x%m << "\n"; //*Output: 2 
    //? In C++, the remainder of the negative number is either zero or negative 
    //? If the result is negative, we will add m. We'll make a loop that whenever it is still less than 0, we will add m.
    //? However, because the remainder will always running from 0 ... m-1, adding m one time will ensure our remainder to be the right amount
    
    //feat: Floating point numbers
    //? usual floating point types are the 64-bit double, and an extension in the g++ compiler, the 80-bit long double
    //? long double is more accurate
    printf("%.9f \n", x); //*Output: 0.000000000000000 
                          //? Why? In this example, I let the x to be a long long type, hence, the solution can't be 1
                          
    
    long double ld_number = 12;
    float floating_number = 12; 
    // printf("%.9f \n", floating_number); //*Output: 12.000000000
    
    
                
    
    
    //feat: define for loops for faster 
    /* for(8, 10){
        cout << "I have fun \n"; 
    } */
}