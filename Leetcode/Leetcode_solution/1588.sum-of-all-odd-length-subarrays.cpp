/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start

#include <bits/stdc++.h>

using namespace std;


static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}();



class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        vector<int> solution; //? Solution
        // ?  Two pointers method
        int start  = 0;
        int end = nums.size() - 1;
        int counter = 1;
        int sum = 0;

    // Counters methods
    /*
        Having the first counter, sum up to the bottom of the equation
    */


        for (int i  = 0, j = nums.size() - 1; i < nums.size(); ++i ){
            for (int i = 0; i < counter; ++i){
                sum += nums[i]; 

            }


            //? Stopping conditions
            if (counter < nums.size()) i = 0;

        }
        return 0;
    }
};
// @lc code=end

