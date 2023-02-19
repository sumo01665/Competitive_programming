/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //? Windows
    //     int left = 0, right = 0, length = INT_MAX;
    //     int sum = 0;
    //     while (right < nums.size()){
    //         sum += nums[right];
    //         while (sum >= target){
    //             length = min(length, right - left + 1);
    //             sum -= nums[left++];
    //     }
    //         right++;

    // }
    //     if (length == INT_MAX) return 0;
    //     return length;

        //? fWindows
        int left = 0, right = 0, sum = 0, length = INT_MAX;

        while(right < nums.size()){
            sum += nums[right];
            while(sum >= target){
                length = min(length, right - left  + 1);
                sum -= nums[left++];
            }
            ++right;
        }
        return length == INT_MAX ? 0 : length; 
    }
};
// @lc code=end

