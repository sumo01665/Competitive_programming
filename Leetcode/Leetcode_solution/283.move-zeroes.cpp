/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

static auto fast_io = [](){ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr); return false;

}();
// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // fast_io();
        //? Two pointers method
        // int slow_ptr = 0;
        // for (int i = 0; i < nums.size(); ++i){
        //     if (nums[i] != 0) nums[slow_ptr++] = nums[i];
        // }
        // for (int i = slow_ptr; i < nums.size(); ++i) nums[i] = 0;


        //? Swapper method
        for (int lastZeroMember = 0, cur = 0; cur < nums.size(); ++cur){
            if (nums[cur] != 0) swap(nums[lastZeroMember++], nums[cur]);

        }

    }
};
// @lc code=end

