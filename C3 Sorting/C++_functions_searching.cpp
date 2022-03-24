//? This section will discuss about the c++ functions, and show how to find the top and the bottom position of the code

#include <bits/stdc++.h>
using namespace std; 

//define macros and typedef
typedef long long LL;
#define REP(i,a,b) for(int i = a; i < b; i++)

//function 
//? This is the function prototype, that it does nothing other than telling what to do through the name of it
bool ok(int a) {
//? This function will return whether the solution of a problem will be bigger than the value that it finds or not. Generally, 
//? if the value which is needed to find locate to the left of the solution, then it will return false. Otherwise, the value itself and 
//? to the right will return true. 
}

bool f(int a){
    //? This function is the same with the ok one, except that f(x) < f(x+1) when x < k and
    //? f(x) > f(x+1) when x >= k
}

int main(){
    int arr[] = {3,43,42,42,4,23}; 
    int n = sizeof(arr)/ sizeof(arr[0]); 
    int x = 42; //? x is the value that the you want to find. Could be anything, if it's not there, the code will return false. 
    //feat: The C++ functions 
    /* 
    ? lower_bound: returns a pointer to the first array element whose value is at least x
    ? upper_bound: returns a pointer to the first array element whose value is larger than x
    ? equal_range: returns both above pointers
    ! The function assumes that the array that being used for these function have been sorted. 
    */
    sort(arr, arr + n); 
    
    //todo: lower_bound
    auto k = lower_bound(arr, arr + n, x) - arr;
    auto dk = lower_bound(arr, arr + n, x); 
    // cout << dk << endl; //* This is a pointer, so the value will get return in the form of the memory address. 
    if (k < n && arr[k] == x){
        // cout << "I found x at the position of as the lower_bound " << k << endl; 
        //*Output: (if x = 3) 0
        //*Output: (if x = 43) 5
        //*Output: (if x = 42) 3
        //*Output: (if x = 34343) (do not return anything)
    }
    
    //todo: upper_bound
    auto d = upper_bound(arr, arr +n, x) -arr; 
    if (k < n && arr[k] == x){
        // cout << "I found x at the postion of the upper_bound: " << d << endl; 
        //*Output: (if x = 3) 1
        //*Output: (if x = 3) 6
        //*Output: (if x = 3) 5
        //*Output: (if x = 34343) (do not return anything)
    }
    //? To know how many elements that I find in the bounds function:
    // printf("This is how many %d I find in the array here: %d. \n", x, d - k); 
    //! If you can't find the value, then they will return blank
    
    //todo: equal_range
    auto r = equal_range(arr, arr + n, x); 
    // cout << r.second - r.first << "\n"; //*Output: (if 42) 2
    
    
    //feat: Finding the smallest solution next to the answer value (Using the binary search)
    int x = -1;
    int  z = n/2;
    for (int b = z; b >= 1; b/=2 ){
        while(!ok(x + b)) x +=b; //Moving the position to the right
        
    }
    int k = x + 1; //? k is the solution nearest to the solution we want to find
    
    //feat: Find the maximum value for a function that is first increasing and then decreasing
    int x2 = -1; 
    int z2 = -1; 
    for (int b = z2; b >= 1; b/=2){
        while (f(x2 + b) < f(x2 + b + 1)) x2 += b; 
        
    }
    int k2 = x2 +1;
    for (int i = 0; i < n; i++){
        cout <<arr[i] << "|"; 
    }
}