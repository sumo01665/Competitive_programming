//? This section will talk about searching through binary 

#include <bits/stdc++.h>
using namespace std; 

//define macros and typedef
typedef long long LL;
#define REP(i,a,b) for(int i = a; i < b; i++)

//function 
//? This one is used for the jump search that is implemented for the sqrt(n) search runtime. 
//! Read this after doing the first two binary sorted search. 
int jumpSearch(int arr[], int x, int n)
{
    // Finding block size to be jumped
    int step = sqrt(n);
 
    // Finding the block where element is
    // present (if it is present)
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step; //This will look like the one in jump search for the array
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
 
    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < x)
    {
        prev++;
 
        // If we reached next block or end of
        // array, element is not present.
        if (prev == min(step, n))
            return -1;
    }
    // If element is found
    if (arr[prev] == x)
        return prev;
 
    return -1;
}
//! O(sqrt(n))

//classes

//? To print out the input of the sort, the following lines of code can be used throughout the coding
// for (int i = 0; i < n; i++){
//         cout << arr[i] << endl; 
//     }

int main() {
    
    int arr[] = {12,3,232,2,42,4}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 12; //? This is the value that you want to find
    //Using the binary search
    //feat: unsorted array 
    //? If we have an unsorted array
    for (int i = 0; i < n; i++){
        if (arr[i] == 3){
            // cout << "i found 3"; 
            // x found at index i 
            //? This searching takes around O(n) run time because it runs through the whole list
        }
    }
    //! O(n)
    
    //feat: sorted array 
    //todo: The from the middle outward method
    sort(arr, arr+n);
    //? This way of searching is look like you search through the dictionary. You open the book, and you start from the middle. Then you go to the nearest
    //? letter either from the left side or in the right side. Then you pick a random place to move to the nearest middle, and then you cut down to the 
    //? bottom of the code.
    
    // int a = 0, b = n - 1; 
    // while(a <= b){
    //     int k = (a + b)/2; 
    //     if (arr[k] == x){
    //         //x found at index k 
    //     }
    //     if (arr[k] > x) b = k - 1; //? Move to the left if the array number is larger than the one that being compared. 
    //     else a = k + 1;  //? Move to the right if the array number is smaller than the one that being compared.
    // }
    //!O(log(n))
    
    //todo: The jumping method with log n run time
    int k = 0; 
    x = 232;
    for (int b = n/2; b >= 1; b /= 2){ //b must be the integer here, otherwise, the code will misunderstand that it iterates through the float
        while (k + b < n && arr[k + b] <= x) 
        {
            cout << "This is b: " << b << "\n"; 
            k += b;                                                //? n here is the size of the array, as b must be bigger than 0, the jump will be from 0 to the size divide by 1.
            cout << "This is k: " << k << endl;                    //? If the value in the sorted array is smaller than the middle point, k += b will move closer to that point for the first time.                       
        }                                                          
                                                                   //? In this example, the size of the array is 6. B will be 3 at first, and if the x value (the one that we want to find) is larger than the 
                                                                   //? one in that position, then the k value will be unaffected. The loop will iterate once, and it will land at int(3/2) =1. We start at one, 
                                                                   //? and they assume that the one will must need to be found will be between the 1 (not 0, we assume our base case to be 0) and the middle point. 
                                                                   //? We then add k an extra 1, and move forward until it reaches (which test 1, 2) and if it finds the position, it will return it finds it. 
                                                                   //? Otherwise, it doesn't find the position. 
    }
    if (arr[k] == x){
        cout << "I found you!" << endl;
        //x found at index k 
        
    }
    //! O(log(n))
    
    //todo: The square root method 
    //? This part is a bit of extra, since the runtime of sqrt(n) will be worse than the runtime of log(n)
    
    
    for (int i = 0; i < n; i++){
        // cout << arr[i] << "|"; 
        
    }
}