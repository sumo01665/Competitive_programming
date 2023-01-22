/*
 * @lc app=leetcode id=1051 lang=cpp
 *
 * [1051] Height Checker
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
    //? Create two arrays, runtime O(n), space O(n)
        vector <int> unmodified_heights = heights;
        int count = 0;
        sort(heights.begin(), heights.end());
        for (int i = 0, j = 0; i < heights.size(); ++i, ++j){
            if (unmodified_heights[i] != heights[j]) count++;


        }
        return count;



    }
};
// @lc code=end

