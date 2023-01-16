// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem125.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--){
            //? If both of them are equaled, what happened?
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;
            if (tolower(s[i]) != tolower(s[j])) return false; //? Remember lower cases
    }
    return true;
}

};
// @lc code=end

