/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string solution;
        for (int i = 0; i < word1.length(); ++i){
            solution += word1[i];

        }
        return solution; 
    }
};
// @lc code=end

