//? Summary: Subarray sum
/* 
? Description: Find a subarray in a positive array n integers, and a target sum x, and we want to find a subarray whose sum is x or to check whether there is no such subarray
? This problem can be solved in O(n) time by using the two pointers method. The idea is to maintain pointer that point to the first and last value of a subarray
? The pointer will move from the left, to the right until the sum they find out is at most x, if it crosses the x, then the array will return the wrong value
*/
#include <bits/stdc++.h>
using namespace std; 

static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return 0;}();

//Macros
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long LL; 
//Global variables

//Functions

bool subArray(int &array, int n){
   return true;  
    
}
/* Template
    

*/

//Main function
int main(){
    
    vector<int> arr = {1,2,5,3,4,20,6,3}; 
    int n = arr.size(); 
    
    int array[] = {1,2,5,3,4,20,6,3}; 
    
    int n2 = sizeof(array)/sizeof(array[0]);
    int *ptr = 0; 
    ptr = array;
    cout << *(ptr + 0) << endl; 
    
    
    // This is just a pointer: *ptr++; 
    
    cout << *ptr << endl;  
    // cout << "This is the value of ptr: " << ptr <<  endl; 
    // ptr++;  
    // cout << "This is the value of ptr: " << ptr <<  endl; 
    
    int *ptr2 = 0; 
    ptr2 = array; 
    // cout << *(ptr2 + (n2 - 1)) << endl; 
    
    int sum = 0; 
    int x = 25; 
    int a = 0; 
    int arrSize = *(&array + 1) - array ; 
    cout << "This is arrSize: " << arrSize << endl; 
    list <int> solution = {}; 
    for (int i = 0; i < n2; i++){
        sum += *(ptr + i);
        if (sum > x){
            sum -= *(ptr + a);
            a++;
            solution.pop_front();
        }
        else if (sum == x){
            cout << "This is the right sum "; 
            solution.push_back(i);
            break; 
        }
        else {}
        solution.push_back(i); 
        // cout << "This is the pointer I want to point at: " << *(ptr + i) << endl; 
        // cout << "This is the sum now: " << sum << endl; 
        
    }
    while(!solution.empty()){
        // cout << solution.front() << "|";
    }
    // cout << "This is the sum of the array: " << sum << endl; 
    
}

