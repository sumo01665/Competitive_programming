/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}();
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        fast_io;
        // //? Set
        // set<int> s;
        // for (int i = 0; i < nums.size(); ++i) s.insert(nums[i]);
        // nums.assign(s.begin(), s.end());
        // return s.size();

        //? Two pointers method
        int slow_ptr = 1;
        for (int f_ptr = 1; f_ptr < nums.size(); ++f_ptr){
            if (nums[f_ptr] != nums[f_ptr - 1]){
                nums[slow_ptr] = nums[f_ptr];
                slow_ptr++;
            }

        }
        return slow_ptr;
    }
};
// @lc code=end

