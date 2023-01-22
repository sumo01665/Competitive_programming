/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //? Trivial solution
        // for (int i = 0; i < nums.size(); ++i) nums[i] *= nums[i];
        // sort(nums.begin(), nums.end());

        // return nums;

        //? Two pointers solution 
        int left = 0, right = nums.size() - 1;
        vector<int> solution(nums.size());
        for (int i = nums.size() - 1; i >= 0; --i){
            int square = 0;
            if (abs(nums[left]) < abs(nums[right]))
                square = nums[right--];
            else square = nums[left++];

            solution[i] = square * square;
        }
        return solution;
    }
};
// @lc code=end

