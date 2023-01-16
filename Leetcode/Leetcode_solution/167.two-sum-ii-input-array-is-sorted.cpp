// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem167.h"

using namespace std;

static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> solution;
        for (int i = 0, j = numbers.size()-1; i < j;){
            while (numbers[i] + numbers[j] > target) j--;
            while (numbers[i] + numbers[j] < target) i++;
            if (numbers[i] + numbers[j] == target){
                solution.insert(solution.end(),{i + 1, j + 1});
                return solution;

            }
        }
        return solution;
    }
};
// @lc code=end

