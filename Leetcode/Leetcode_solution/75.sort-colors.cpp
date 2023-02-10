// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem75.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
    //* O(n^2)
        //? Selection sort - unstable
        // int min_nums = 0;
        // for (int i = 0; i < nums.size(); ++i){
        //     min_nums = i;
        //     for (int j = i + 1; j < nums.size(); ++j){
        //         nums[j] < nums[min_nums] ? min_nums = j : j = j;
        //     }
        //     swap(nums[i], nums[min_nums]);

        // }

        //? Bubble sort - stable sort
        // bool has_swapped = true;
        // while (has_swapped){
        //     has_swapped = false;
        //     for (int i = 1; i < nums.size(); ++i){
        //         if (nums[i - 1]  > nums[i]){
        //             swap(nums[i - 1], nums[i]);
        //             has_swapped = true;
        //         }
        //     }

        // }


        //? Insertion sort  - stable sort
        for (int i  = 1; i < nums.size(); ++i){
            int current_i = i;
            while( current_i > 0 && nums[current_i] < nums[current_i - 1]){
                swap(nums[current_i], nums[current_i - 1]);
                current_i--;
            }

        }
    }
};
// @lc code=end

