//? Summary: Maximum subarray sum 
//todo: Description: The problems given a array of n numbers, our task is to calculate maximum subarray sum (or the largest possible sum of a sequence)

//* Let's think about it: 
    // If they are all positive, then the answer is pretty easy. Sum up all of the values in the array 
    // If they are all negative, then the biggest number will be the one that is a subset from all of the array. 
    
    // Examples of the arrays: 
        // int a[8] = {-1,2,4,-3,5,2,-5,2}
        //? The solution for this problem is that from 2,4,-3, 5, 2, -5 are the sum of the biggest number of 10 

//! It is always recommended to try out the problem first before attempting the solutions. 
        
#include <bits/stdc++.h>

using namespace std; 

//define typedef
typedef long long LL; 
//define macros
#define REP(i,a,b) for(int i = a; i <= b; i++)

//function
//The obvious algorithm 
//feat: The cubic solution 
/* int best_sum_array(int (&arr)[7]){
    int n = 0; 
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int best = 0; 
    REP(i, 0, n){
        REP(j , 0, n){
            int sum = 0; 
            REP(k , 0, n){
                sum += arr[k];
                
            }
            
        }
        
    } 
    return n; 
}
 */
 
void array_pbr(int arr[]){
    REP(i, 0, 5){
        // cout <<arr[i] << ",";
    }
    
}

int main(){
    
    
    int arr[] = {-1,-3,3,4,-8,0,12,32,-33,5};
    array_pbr(arr); 
    int n = sizeof(arr)/ sizeof(arr[0]);
    int best = 0; //Best value
    
    //feat: The cubic solution
    // REP(a, 0, n){
    //     REP(b, a, n){
    //         int sum = 0; 
    //         REP(c, b, n){
    //             sum += arr[c]; //best must be bigger than sum 
    //             }
    //             if (sum > best) {
    //                 best = sum;
    //                 // cout << "this is best: " << best << endl;    
               
    //         }
    //     }
    //     //? This is the best sum ever! 
    // }
    
    //feat: The square solution 
    // for (int i = 0; i < n; i++){
    //     int sum = 0; 
    //     for (int j = i; j < n; j++){
    //         sum += arr[j];
    //         // cout << sum << endl; 
    //         cout << best  << endl ;
    //         best = max(sum, best); 
                
    //     }
        
    //     cout << best << "\n"; 
    // }
    
    //feat: O(n) runtime 
    int sum = 0; 
    for (int k = 0; k < n; k++){
        sum = max(arr[k], sum + arr[k]); 
        best = max(best, sum);
    }
    cout << best; 
    
    //? Efficiency comparison
    //! For the cubic loop, it takes around 10^4 input to let the run time to be bigger than 10 seconds
    //! For the square loop, it takes around 10^6 input to let the run time to be bigger than 10 seconds
    //! For the linear loop, ita takes around more than 10^7 input, but the run time is still around 0 seconds
    
    return 0; 
    
}
