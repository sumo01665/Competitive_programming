/*
 * @lc app=leetcode id=829 lang=cpp
 *
 * [829] Consecutive Numbers Sum
 */

// @lc code=start
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count = 0;
        for (int i = 1; (double)(n)/i > i/2.0; i++) {
            if (i % 2 == 1 && n % i == 0) count++;
            else if (i % 2 == 0 && n % i == i/2) count++;
        }
        return count;
    }
};
// @lc code=end

