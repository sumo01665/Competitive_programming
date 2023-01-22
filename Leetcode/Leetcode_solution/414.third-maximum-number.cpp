/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        //? O(n) in time, O(n) in space using set as placeholder
        set <int> set_nums;
        int solution = 0;
        for (int i : nums) set_nums.insert(i);
        if (set_nums.size() < 3) return *set_nums.rbegin();
        else {
        std::set<int>::iterator it;
        it=set_nums.begin();
        advance(it, set_nums.size() - 3);
            solution = *it;
        }
        return solution;

        //? Numeric limits trial
        // long long first_max = numeric_limits<long long>::min();
        // long long second_max = numeric_limits<long long>::min();
        // long long third_max = numeric_limits<long long>::min();

        // for (int &num : nums)
        // {
        //     //? Already used number
        //     if (first_max == num || second_max == num || third_max == num)
        //         continue;

        //     //? If this number is greater than the first max, move down the ladder
        //     if (num > first_max)
        //     {

        //         second_max = first_max;
        //         first_max = num;
        //     }

        //     else if (num > second_max)
        //     {
        //         third_max = second_max;
        //         second_max = num;
        //     }
        //     else if ( num > third_max) {
        //         third_max = num;
        //     }

        // }
        // if (third_max == numeric_limits<long long>::min()) return first_max;
        // return third_max;
    }
};
// @lc code=end
