//? Summary: Coin problem 
/* 
    ? Given the set of coins = {c1, c2, ... , cn} and a targe sum of money n, task is to form the sum n  using as few coins as possible
    Dynamic programming so that the algorithm works for any coin set. The dynamic programming algorithm is based on a recursive function that goes through all possibilities 
    how to form the sum => a brute force algorithm. 
    ? Dynamic algorithm is efficient because it uses memoization and calculates the answer to each subproblem only once. 
    
*/

#include <bits/stdc++.h> 
using namespace std; 
//Macros
typedef long long int LLI; 
//Global variables
const int INF = 99999;
//function 
//? This function is really good, but it is not efficient! 
int solve(int x){
    int coins[] = {1,3,4}; 
    if (x<0) return INF; 
    if (x==0) return 0; 
    int best = INF; 
    for (auto c : coins){
        best = min(best, solve(x-c) + 1); 
        //? The below lines will check if the solution is f
        // cout << x << "," << c << "," << best << endl; 
        
    }
    return best; 
    
}

int main(){
    cout <<  solve(4) << endl; //*Output: 1 
    cout << solve(10) << endl; //*Output: 3
}