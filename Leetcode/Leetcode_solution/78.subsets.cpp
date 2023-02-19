/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    /// @brief signed value
    /// @param n
    /// @return value of the power of two with the recursive n
    int power_of_two(int n){
        if (n ==  0) return 1;

        return 2 * power_of_two(n - 1);


    }

    vector<vector<int>> subsets(vector<int>& nums) {
        //? Base case
        if (nums.size() == 0) return {};


        int set_count = power_of_two(nums.size());
        int count = nums.size();
        vector <int> subset;
        vector<vector<int>> solution;
        for (int i = 0; i < set_count; ++i){ //? Print out all of the number set
            for (int j = 0; j < count; ++j){
                if ((i & (1 << j)) != 0){
                    subset.push_back(nums[j]);
                }
            }
            solution.push_back(subset);
            subset = {};
        }
        return solution;
    }
};
// @lc code=end

