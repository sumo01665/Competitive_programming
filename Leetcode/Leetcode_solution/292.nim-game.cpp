/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 */

// @lc code=start
class Solution {
public:
    bool factor_of_four(int n){
        if (n == 4) return false;
        if (n < 4) return true;
        return factor_of_four(n - 3);
    }
    bool canWinNim(int n) {
        return (factor_of_four(n) || n == 7);
    }
};
// @lc code=end

