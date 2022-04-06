//? Description: Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include <bits/stdc++.h>
using namespace std;

//Global variables

//Macros
typedef long long LL; 


//Function
int subtractProductAndSum(int n) {
    int sum = 0; 
    int product = 1; 
        while (n){
            cout << n << endl; 
            sum += n% 10; 
            cout << "This is sum: " << sum << endl; 
            product *= n%10;
            cout << "This is product: " << product << endl; 
        
        n /= 10; 
        }
    return 0; 
}

//feat: Recursive solution (function overload)
int prod(int n){
        return (n < 10) ? n : n%10 * prod(n/10);
    }
    
int sum(int n){
        return (n < 10) ? n : n%10 + sum(n/10);
}
    
int subtractProductAndSum2(int n) 
{
        return prod(n) - sum(n);    
}
//Template
/* 
int subtractProductAndSum(int n) {
}

*/

//Main function 
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0); 
    
    int n = 234; 
    cout <<subtractProductAndSum(n) << endl; 
    
}