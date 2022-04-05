#include <bits/stdc++.h>
using namespace std; 
/* 
todo: Template
    int maxSubArray(vector<int>& nums) {
        
    }

*/
//Functions 
int maxSubArray(vector<int> & nums) {
    int sum = 0; 
    int best = -9999999999; 
    for (int i = 0; i < nums.size(); i++){
        for (int j = i; j < nums.size(); j++){
        sum += nums[j]; 
        if (sum > best){
            best = sum; 
            
        }
        }
        sum = 0;
    }
    return best; 
    //? Runtime O(n^2)
}
int maxSubArray2(vector<int>& nums) {
    int best = 0; 
    int best2 = 0; 
    for (int i = 0; i < nums.size(); i++){
        best = max(nums[i], best + nums[i]);
        cout << "This is best: " << best << endl; 
        
        best2 = max(best, best2); 
        cout << "This is best2: " << best2 << endl; 
    }        
    return best2; 
}

// Main function 
int main(){
    vector<int> nums = {5,2,-1,-7,8};
    
    // cout << maxSubArray(nums) << "\n"; 
    cout << maxSubArray2(nums) << "\n"; 
}