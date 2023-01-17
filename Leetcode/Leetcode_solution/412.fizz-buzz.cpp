/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int count = 0;
        vector<string> solution;
        string embedded;
        for (int i = 0; i < n; ++i){
            if ((i +1) % 3 == 0 || (i +1) % 5 == 0){
                if ((i + 1) %3 == 0) embedded += "Fizz";
                if ((i + 1) %5 == 0) embedded += "Buzz";

            }


            else embedded += to_string(i + 1);
            solution.push_back(embedded);
            embedded = "";
        }

        return solution;
    }
};
// @lc code=end

