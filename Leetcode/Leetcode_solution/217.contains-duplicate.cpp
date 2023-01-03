// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <bits/stdc++.h>
// #include "commoncppproblem217.h"

using namespace std;

static auto fast_io = [](){ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0); return false;}();
// @before-stub-for-debug-end


/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i])!= map.end()) return true;

            map[nums[i]] = i;
    }

    return false;
    }
};
// @lc code=end

