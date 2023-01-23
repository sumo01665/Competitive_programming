/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //? Swapper method
        for (int even_radar = 0, cur = 0; cur < nums.size(); ++cur){
            if (nums[cur] % 2 == 0)
                swap(nums[even_radar++], nums[cur]);

        }
        return nums;

        //? Two pointers method
        // int even_radar = 0;
        // for (int  cur = 0; cur < nums.size(); ++cur){
        //     if (nums[cur] % 2 == 0)
        //         nums[even_radar++] = nums[cur];

        // }
        // //TODO: Implement auxilary array to populate odd number
        // for (int cur = even_radar; cur < nums.size(); ++cur){
        //         nums[even_radar++] = nums[cur];

        // }
        // return nums;
    }
};
// @lc code=end

