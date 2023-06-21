/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector <int> solution(size, 1);

        int prefix = 1;
        for (int i = 0; i < size; ++i){
            solution[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i = size - 1; i >= 0; --i){
            solution[i] *= postfix;
            postfix *= nums[i];
        }

        return solution;

    }
};
// @lc code=end

