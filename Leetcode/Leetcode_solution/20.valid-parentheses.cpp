// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        unordered_map<char, char> parenthesis;
        parenthesis = {{')', '('},
                       {']', '['},
                       {'}', '{'}};

        for (char str : s)
        {

            if (str == '(' && str == '[' && str == '{')
            {
                cout << "Something" << endl;
                stk.push(str);
                continue;
            }

            char t = stk.top();
            cout << "parenthesis[t]: " << parenthesis[')'] << endl;
            // if(t == parenthesis[str]) stk.pop();
        }
        if (stk.empty())
            return false;

        return true;
    }
};
// @lc code=end
