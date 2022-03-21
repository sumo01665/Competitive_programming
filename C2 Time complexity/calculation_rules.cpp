//? Summary: this is a discussion about time complexity of the function
//! In here, please look at define macros. I have changed the definition of for-loop to type it faster. It is not recommended you to use it unless you understand 
//!     what can be achieved through macros, and any limitations that you may face by using it. 
#include <bits/stdc++.h>


using namespace std; 

//Define typedef 
typedef long long LL; 
//Define macros here
#define REP(i,a,b) for(int i = a; i <= b; i++)

//! Function
//? In this part, the function only be used when reaching the feat: recursion. It will look confusing if you have no knowledges about time complexity before
void f (int n){
    if (n == 1) return;  
    f(n - 1); 
    //The time complexity of this function is O(1). The function will stop when it touches 1. 
    //If the function costs only 1 as n, then it runs in O(1) times. However, because it could run to n numbers, then the time complexity of the function should be O(n)
}

void g (int n){
    if (n == 1) return; 
    g(n-1);
    g(n-1);
    
/*     function call  number of calls
            g(n)           1
            g(n−1)         2
            g(n−2)         4
            ···           ···
            g(1)         2^n−1 

*/
//? The time complexity is the total number of calls added together which can be later simplified. 
    // 1+2+4+··· +2^(n−1) = 2^n −1 = O(2^n)

//todo: In this case, this function returns the time complexity of 2^n

    
}

//? The main function 
int main(){
    //feat: Loops time complexity O(n^k)
    
    int n = 2; 
    for(int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j ++){
            // cout << "This is i: " << i << "\n"; 
            // cout << "This is j: " << j << "\n";
        }
    }
    
    //feat: Order of magnitude 
    //? The order of magnitude can be different, for example: 
    
    REP(i, 0, 3*n){
        //Code here
        // cout << i; //*Output: 0123456 
        //? In this case, the order of magnitude is 3n
        //? so O(3n) should be the answer, but the time complexity ignores the multiple. Hence, the time complexity here is n
    }
    
    REP(i,0, n+5){
        //Code here
        // cout << i; //*Output: 01234567
        //? In this case, the order of magnitude is n + 5
        //? so O(n + 5) should be the answer, but the time complexity ignores the constant. Hence, the time complexity here is n 
    }
    
    //err: This one doesn't work if you intended to make it happens
    // REP(i, 0, i+2){
    //     //Code
    //     cout << i; //*Output: 
    // }
    
    //err: This is also not worked. It is intepreted as i < = + = 2, which makes no sense
    // REP(i , 0, i+=2)
    // {
    //     cout << i; 
    // }
    
    //? Use for-loop here
    for (int i = 1; i <=n; i+=2){
        //code
        // cout << i; //*Output: 1
        //? In this case, the order of magnitude is ceil(n/2)
        //? Since 1/2 is a multiple, it is viewed as O(n), which is time complexity here is n 
    }
    
    //? What about loop inside loop? 
    REP(i, 0, n){
        REP(j, 0, n){
            // cout << i <<  " , " << j << "| "; //*Output: 0 , 0| 0 , 1| 0 , 2| 1 , 0| 1 , 1| 1 , 2| 2 , 0| 2 , 1| 2 , 2| 
            //? In this case, the order of magnitude is O(n^k), so when we have two loops, the big O notation here is n^2 
        }
    }
    
    //feat: Phases
    //? If the algor. consists of consecutive phases, the total time complexity is the largest time complexity of a single phase
    //? The slowest phases is usually the bottleneck of the code
    //* example
    REP(i, 1, n){
        //code
        //? O(n)
    }
    REP(i, 1, n){
        REP(j, 1, n){
            //code
            //? O(n^2)
        }
    }
    REP(i,1,n){
        // code
        //? O(n)
    }
    // So if the code has three phases, the time complexities O(n), O(n^2) and O(n), the total time complexity of the code is O(n^2) 

    //feat: Several variables
    // If it depends on the two variables that is independent to each other, we keep both of them. 
    int m = 5; 
    int n = 4; 
    REP(i,1, n){
        REP(i, 1, m){
            //code 
            //? O(mn)
        }
    }
    
    //feat: recursion 
    //Time complexity of the recursive functions depend on the number of times the function is called and the time complexity of a single call 
    //! The total time complexity is the product of these values: 
    //? (Navigate through the function at the beginning of the code: check out to understand what is the time complexity of the code)
    
}