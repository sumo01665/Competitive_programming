//? Complete search 
    //- Complete search is a general method that can be used to solve almost any algorithm problem, or trying to create the brute-force solution for the problem
    
//? Summary: Generating the subsets

#include <bits/stdc++.h> 
using namespace std;

//function (creating subsets to search)
//feat: recursive
void search(int k){
    // n is the element of the subset
    int n = 34; 
    vector <int> subset; 
    if (k == n){
        // Process subset
    } else {
        search(k+1); 
        subset.push_back(k); 
        search(k+1); 
        subset.pop_back(); 
    }
    
}
//feat: Bit representation of integers
void search2(int n){
    for (int b = 0; b < (1 << n); b++){
        //process subset
        vector <int> subset; 
        for (int i = 0; i < n ; i++){
            if (b &(1<<i)) subset.push_back(i); 
        }
        
    }

}
int main() {
    
    
}