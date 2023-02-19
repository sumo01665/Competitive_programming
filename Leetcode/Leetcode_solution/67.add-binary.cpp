/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        bool carry = false;
        int size = a.size() < b.size() ? b.size() : a.size();
        string solution;
        for (int i = 0; i < size; ++i){
            if (a[i] !=  b[i]) solution.insert(0, "1");

            cout << typename<decltype(a[i] = a[i] == '\0' ? a[i] : b[i])>;
            while (carry == false && (a[i] == '\0' || b[i]== '\0'))
                // solution.insert(0, a[i] = a[i] == '\0' ? a[i] : b[i]);

        }

        cout << solution << endl;

        return "";
    }
};
// @lc code=end

