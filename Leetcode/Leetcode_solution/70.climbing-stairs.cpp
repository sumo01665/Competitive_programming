// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem70.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n  == 1) return 1;
        return climbStairs(n - 1) + climbStairs(n - 2);
    }

    int climbStairsRecursive( int n ){
        return (climbStairsRecursive(n - 1));


    }
};
// @lc code=end

