// @before-stub-for-debug-begin
#include <vector>
#include <string>
// #include "commoncppproblem49.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

#include <bits/stdc++.h>

using namespace std;

// @lc code=start
class Solution
{
public:
    // feat: Function prototype
    //! Solution  1: Run time exceeded
    bool anagram_check(string name1, string name2)
    {
        sort(name1.begin(), name1.end());
        sort(name2.begin(), name2.end()); //
        return (name1 == name2);
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        vector<string> temp; //* Temporary placeholders for solution strings
        unordered_map<string, int> hash_check;

        //? Base case empty strs
        if (strs.empty())
            return ans;
        //? Base case single string
        if (strs.size() == 1)
            return {{strs[0]}};

        for (int i = 0; i < strs.size(); ++i)
        {
            if (hash_check.find(strs[i]) != hash_check.end())
            {
                // cout << strs[i] << ": " << hash_check[strs[i]] << endl;
                continue;
            }
            temp.push_back(strs[i]);
            for (int j = i + 1; j < strs.size(); ++j)
            {
                if (anagram_check(strs[i], strs[j]) == true)
                {
                    hash_check[strs[j]]++;
                    cout << strs[j] << ": " << hash_check[strs[j]] << endl;
                    temp.push_back(strs[j]);
                }
            }
            if (temp.size() > 0)
                ans.push_back(temp);
            temp.clear();
        }
        // cout << hash_check["ate"] << endl;
        return ans;
    }
};

// @lc code=end
