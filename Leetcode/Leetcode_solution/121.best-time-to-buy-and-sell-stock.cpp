// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem121.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        for (int l = 0, r = 0; r < prices.size();++r){
            (prices[r] > prices[l]) ? maxP = max(prices[r] - prices[l], maxP): l = r;
        }
        return maxP;
    }
};
// @lc code=end

