#include <bits/stdc++.h>

using namespace std; 


//? Global variables
const int n = 5; 

static auto fast_io = [](){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

int main(){ 
    fast_io; 
    
    int a[5] = {2,35,53,34,12}; 
    int *p;
    
    
    int sum, i; 
    //! a != p => can't be written this way
    // a = p; 
    
    // a++; 
    
    
    //? One way: return the sum of everything
    // for (sum = a[0], i = 1; i < 5; ++i)
    //     sum += a[i]; 
    
    
    for (sum = *a, i = 1; i < 5; ++i){ 
        sum += *(a + i); 
    
    }
    
    cout  << sum << endl; 
    
    //feat: Denotion of the ideas
    // 
    // c + i * sizeof(long)
    
    p = new int[n]{1,2,3,4,5};
     
    //? populate dynamic arrays
    for (int i = 0; i < 5; ++i){ 
        p[i] = i; 
    
    }
     
    int sum2; 
    
    //? Approach 1: for simple loops
    // for (sum2 = p[0], i = 1; i < n; ++i){
    //     sum2 += p[i];    
    // }
    
    //? Approach 2: for single pointer loop
    // for (sum2 = *p, i = 1; i < n; ++i){
    //     sum2 +=  *(p + i);
    // }
    
    
    int *q;
    //? Approach 3: Using two pointers
    for (sum2 = *p, q = p + 1; q < p + n; ++q){
        sum2 += *q;
    
    }
    
    
    cout << sum2  << endl; 

    delete []p; 
    return EXIT_SUCCESS; 
}