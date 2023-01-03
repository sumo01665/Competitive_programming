// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <bits/stdc++.h>
// #include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int,int> map_check;
        vector <int> solution;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map_check.find(target - nums[i]) != map_check.end()){
                solution.push_back(map_check[target - nums[i]]);
                solution.push_back(i);
                return solution;
            }
            else{
                map_check[nums[i]] = i;
            }
        // for (auto i = map_check.begin(); i != map_check.end(); ++i){
        //     cout << i->first << " " << i->second << endl;

        // }

        //? Print the nums solution
        // for (int i = 0; i < nums.size(); ++i) {
        //     cout << nums[i] << endl;
        // }
        };
        return {};

    }
};
// @lc code=end
