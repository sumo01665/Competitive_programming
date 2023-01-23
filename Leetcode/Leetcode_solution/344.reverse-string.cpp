/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        //? Iterate to the midpoint
        for (int left = 0, right = s.size() - 1; left < right; ++left, --right){
            swap(s[left], s[right]); 
        }
    }
};
// @lc code=end

