/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //? Base cases:
        int target = 0, counter = 1;
        sort(nums.begin(), nums.end());
        vector<vector<int>> solution;
        vector<int> triplet;

        for (int i = 0, j = nums.size()- 1; i < j; ++i, --j){

            for (int k =  counter; k < j; ++k){
                if (nums[i] + nums[j] +  nums[k] < target) k++;
                else if (nums[i] + nums[j] +  nums[k] == target){
                    // triplet.insert(triplet.end(), {nums[i], nums[j], nums[k]});

                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[j]);
                    triplet.push_back(nums[k]);
                }
                else if (nums[i] + nums[j] + nums[k]);
            }
            if (triplet.size()!= 0) solution.push_back(triplet);
            counter++;
        }
        return solution;
    }
};
// @lc code=end

