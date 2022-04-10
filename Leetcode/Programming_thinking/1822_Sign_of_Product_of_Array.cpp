/*
? Description: 
There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).

*/

#include <bits/stdc++.h>
using namespace std; 
static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return 0;}(); 

//Function
int signFunc(int x){
    if (x > 0){
        return 1;
    }
    if (x < 0){
        return -1;
    }
    else {
        return 0; 
        
    }
    return 0;
}
//? Straight-forward solution 
int arraySign(vector<int>& nums) {
    int product = 1; 
    for (int i = 0; i < nums.size(); i++){
        product *= nums[i]; 
    }
    return signFunc(product);
}

//! Leetcode do not accept solution of a product, so we must use a clever way to go through this: 
//? Doing a scale function 
int scale_integer(int x){
    if (x == -1)
        return 0; 
    if (x % 2 == 0)
        return 1; 

    if (x % 2 == 1)
        return -1; 
    
}

int arraySign2(vector<int>& nums) {
    int scale = INT_MAX; 
    int negative = 0; 
    int positive = 0; 
    for (auto i:nums){
        if (i % 2 == 0)
            negative++; 

    if (i % 2 == 1)
        positive++; 
     
    }
}
//Template
/* 
    int arraySign(vector<int>& nums) {
        
    }
};
*/
int main(){
    vector<int> nums = {9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24}; 
    int n = nums.size(); 
    cout  << arraySign(nums); 
    
}