//? Summary: Meet in the middle
    //- It is a technique where the search space is divided itn otwo parts of about equal size
    //- A separate search is performed for both of the parts, and finally the results of the searches are combined. 
    //- So that we can split the two, and require the large search to be split in half. So that the runtime of 2^n can become 2^(n/2)
    //! What is 2^(n/2)? It is equal to sqrt(2^n). So in other words, you change from exponential runtime to the square root runtime
    
    //* Example: Finding in the list if the numbers in the subsets can be added up to the target numbers
    
/* 
    Let [2,4,5,9] becomes the set, while letting x = 15 becomes the targe
    ? Now you split it in half, let the [2,4] becomes one set and the [5,9] is the another set. Let call S(A) and S(B) are the sum of the possible sums of the two numbers (including zeros)
    ? S(a) = [0,2,4,6] and S(b) = [0,5,9,14]. Now you use the sum to compare between numbers 

*/
    
#include <bits/stdc++.h>
using namespace std; 

int main() {
    int arr[] = {2,4,5,9}; 
    int x = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0; 
    /* 
    ?
    
    */
    return 0; 
}