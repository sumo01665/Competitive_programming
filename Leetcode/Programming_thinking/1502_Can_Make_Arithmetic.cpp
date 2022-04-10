// ? Description: 1502. Can Make Arithmetic Progression From Sequence
/* 
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

*/

#include <bits/stdc++.h>
using namespace std;
static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return 0;}();

//Functions
//? Straight-forward solution: 
bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end()); 
    int diff = 0; 
    int best = arr[1] - arr[0]; 
    for(auto i = 1; i < arr.size(); i++){
        diff = arr[i] - arr[i - 1];
        if (best != diff){
            return false; 
        }
        
    }
    return true; 
        
}
//? Using math solution: 
/* 
    ? Base on the facts that a_{n}=a_{1}+(n-1)*d, we can use this fact to have a quicker check than the first approach. It still have a run time of O(n),
    ? but the runtime is way better
    * Explanation: a_{n} is the number which we are finding
                *  a_{1} is the smallest number in the set
                *  n is the total element in the set
                *  d is the common diff between the two 
*/
bool canMakeArithmeticProgression2(vector<int>& arr) {
    if (arr.size() < 2) return false; 
    int minimum = INT_MAX, maximum = INT_MIN; 
    for (int num : arr){
        minimum = min(minimum, num); 
        maximum = max(maximum, num); 
    }
    if ((maximum - minimum) % (arr.size() - 1) != 0) return false; 
    int d = (maximum - minimum)/ (arr.size() -1);
    int i  = 0; 
    while (i < arr.size()){
        if (arr[i] == minimum + i * d) i++; 
        else if ((arr[i] - minimum) % d != 0) return false; 
        else {
            int pos = (arr[i] - minimum)/d ;
            if (arr[pos] == arr[i]) return false; 
            swap(arr[i], arr[pos]);
            
        }
        
    }
    return true; 
}

//Template
/* 
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
    }
*/

//Main function 
int main() {
    vector<int> arr = {2,4,6,8,9}; 
    cout << canMakeArithmeticProgression(arr); 
    
    
}