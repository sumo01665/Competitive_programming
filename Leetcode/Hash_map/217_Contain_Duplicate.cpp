#include <bits/stdc++.h>
using namespace std; 

//Macros
//Function 
bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); //? n log(n) run time
    int best = nums[0]; 
    int counterFalse = 0; 
    for (int i = 1; i < n; i++){ //? n runtime
        if (nums[i] > best){
            best = nums[i]; 
        }
        if (best == nums[i - 1]){
            counterFalse += 1; 
            if (counterFalse > 0){
                return false; 
        
            }
        }  
    }
    return true; 
    //? The runtime for this solution is O(n^2*log(n))
}

bool containsDuplicate2(vector<int>& nums) {
    set <int> s(nums.begin(), nums.end()); 
    if (s.size() == nums.size()){
        return false; 
    }
    return true; 
    //? The runtime depends on how the function works with the size (which is n runtime), and when they sort into the arrays, it takes the same runtime
    //? Therefore, the runtime is O(n^3)
}
//Template for copy the extra version of function 
/* 
bool containsDuplicate(vector<int>& nums) {
        
    }
*/


int main() {
    vector<int> nums = {2,14,18,22,22}; 
    
    cout << containsDuplicate(nums) << endl; 
    
}