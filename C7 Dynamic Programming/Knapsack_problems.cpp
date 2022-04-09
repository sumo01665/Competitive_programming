//? Knapsacks problems
    // - Refers to the problems where a set of objects is given, and subsets with some properties have to be found, repetition is allowed
    
    
#include <bits/stdc++.h>
using namespace std; 

//Function 
//? Writing the function prototype
bool possible(int x, int k){
    //Writing the base case 
    if (k == 0){
        return true;
        
    }
    
    return false; 
    
    
    return true; //? If we can construct a sum x using the first k weights, but otherwise it will return false
    
}

int main () {
   int a = 5; 
   int b = 2; 
   //? Using the loops of the runtime O(nW)
   //? let W denote the total sum of the weights, x is the sum using all weight, while n is thepossible solution that the code can run 
   bool possible[a][b];
   
   int weight[] = {1,3,3,5}; 
   int n = sizeof(weight)/sizeof(weight[0]);
   int sumOfWeight = 10; 
   const int W = sumOfWeight; 
   
   possible[0][0] = true; 
   for (int k = 1; k <= n; k++){
    for (int x =0; x <= W; x++ ){
        if (x = weight[k] >= 0) possible[x][k] != possible[x-weight[k]][k-1];
        possible[x][k] != possible[x][k-1]; 
        
    }
   }
   
   //Writing the code using the one-dimensional array
   bool possible2[a]; 
   possible2[0] = true; 
   for (int k = 1; k <= n; k++){
       for (int x = W; x >= 0; x-- ){
           if (possible2[x]) possible2[x+weight[k]] = true;
           
       }
       
   }

   
   
    
    
}