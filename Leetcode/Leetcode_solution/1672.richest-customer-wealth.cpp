/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = -1, sum = 0;

        for (int i =  0; i < accounts.size(); ++i){
            for (int j = 0; j < accounts[i].size(); ++j){
                sum += accounts[i][j];
            }
            maxSum = max(sum, maxSum);
            sum = 0;
        }
        return maxSum; 
    }
};
// @lc code=end

