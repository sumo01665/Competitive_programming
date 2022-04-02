//? Summary: Memoization
    //- Efficient calculate values of a recursive functions
    //? What is memoization: This means that the values of the functions are stored in an array after calculating them, so the value can be directly retrieved from the array
    
#include <bits/stdc++.h>
using namespace std; 

//Global constant 
const int INF = 9999999;
const int N = 5; 
//Macros

//Function 
//feat: Solving the coin problem
int solve(int x){
    bool ready[N]; 
    int value[N];
    int coins[] = {1,2,5};
    if (x < 0) return INF;
    if (x == 0) return 0;
    if (ready[x]) return value[x]; //? The functions check for if solve(x) has already been stored in value[x], if it is, then the function directly returns it
                                   //? Otherwise, the function calculate the value of solve(x) recursively and stores it in value[x]
    int best = INF; 
    for (auto c: coins){
        best = min(best, solve(x-c) + 1);
        
    }
    value[x] = best; 
    ready[x] = true; 
    return best; 
    //? By using the following remembering function, the time complexity of the algorithm is O(nk), where n is the target sum and k is the number of coins 
}

int main(){
    //feat: The alternatives
    int value[N] = {23,34,43};
    bool ready[N]; 
     
    int n = sizeof(value)/ sizeof(value[0]);
    int coins[] = {2,3,4,10}; 
    value[0] = 0; 
    for (int x = 1; x <= N; x++){
        value[x] = INF; 
        for (auto c: coins){
            if (x -c >= 0){
                value[x] = min(value[x], value[x-c] + 1);
            }
            
        }
        //? Most competitive programmers prefer this implementation, because it is shorter and has lower constant factors
    }
    
    //feat: Constructing a solution 
    //? If you are asked to give the value of an optimal solution and to give an example, the following code is good to implement
    
    int first[N];
    value[0] = 0; 
    for (int x = 1; x <= n; x++){
        value[x] = INF; 
        for (auto c : coins){
            if (x - c >= 0 && value[x - c] + 1 < value[x]){
                value[x] = value[x-c] +1; 
                first[x] = c; 
            }
        }
    
    }
    
    //? The following code can be used to print the coins
    while (n > 0){
        cout << first[n] << "\n"; 
        n -= first[n];
    }
}