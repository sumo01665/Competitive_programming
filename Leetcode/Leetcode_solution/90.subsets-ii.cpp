/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int power_of_two(int n){
        return (n == 0) ? 1 : power_of_two(n - 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        if (nums.size() == 0) return {};
        int count = 0;


        vector <vector<int>>  solution;



        return solution;

    }
};
// @lc code=end

