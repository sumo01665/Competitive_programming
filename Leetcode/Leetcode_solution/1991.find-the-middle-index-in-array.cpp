/*
 * @lc app=leetcode id=1991 lang=cpp
 *
 * [1991] Find the Middle Index in Array
 */

// @lc code=start
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum  = 0, leftSum = 0;
        for (auto i: nums) sum+= i;
        for (int i = 0; i < nums.size(); ++i){
            if (leftSum == sum - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
    return - 1;
    }

};
// @lc code=end

