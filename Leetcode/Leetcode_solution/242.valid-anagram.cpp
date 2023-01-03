// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <bits/stdc++.h>
// #include "commoncppproblem242.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start

static auto fast_io = []()
{ios_base::sync_with_stdio(false);
                            cin.tie(nullptr); cout.tie(nullptr); return false; }();

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;

        //   array<string,s.size()> arr_1 = s;
        //   array<string,s.size()> arr_2 = t;
        //   cout << arr_1 << " " << arr_2 << endl;

        //   arr_1.sort();
        //   arr_2.sort();
    }
};
// @lc code=end
