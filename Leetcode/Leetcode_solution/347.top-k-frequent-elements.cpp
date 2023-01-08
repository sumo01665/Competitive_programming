/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> hash;
        vector<int> solution;
        vector<int> sorted_value;
        for (auto i : nums)
        {
            hash[i]++;
        }
        for (auto i : hash)
        {
            sorted_value.push_back(i.second);
            sort(sorted_value.begin(), sorted_value.end());
        }
        for (int i = 0; i < k; ++i)
        {
            solution.push_back(sorted_value[i]);
        }
        return solution;
    }
};
// @lc code=end
