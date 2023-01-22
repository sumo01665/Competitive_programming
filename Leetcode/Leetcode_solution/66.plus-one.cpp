/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //? Base case
        // If everything is equal to 9, it's equalled to 9
        int n = digits.size() - 1;
        int count = 0;

        for (int digit = n; digit >= 0; ++digit){
            if (digits[digit] == 9) digits[digit] = 0;
            else {
                digits[digit]++;
                return digits;

        }

        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end

