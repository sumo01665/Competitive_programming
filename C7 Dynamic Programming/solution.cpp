//? Summary: Counting the number of solutions
//* Example: How many ways to count the number of solution if coins = {1,3,4} and x = 5
//* There are totally 6 ways to do this
#include <bits/stdc++.h>

using namespace std; 

//Global variables
const int N = 3; 

int main(){
    bool ready[N];
    int coins[] = {1,3,4}; 
    int count[] = {}; 
    int n = sizeof(count)/ sizeof(count[0]);
    count[0] = 1; 
    for (int x = 1; x <= n; x++){
        for (auto c: coins){
            count[x] += count[x-c];
            //added if you want to find the number of modulo m
            //count[x] %= m; 
            
        }
    }
    
    // If the number of solutions is os large that it is not required to calculate the exact number but it is enough to give the answer modulo m where, m = 10^9 + 7
}