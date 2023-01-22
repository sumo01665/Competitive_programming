/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        // int filled = -1;
        // int slow_ptr = -1;
        // int max_val = -1;
        // int max_iterator = -1;
        // for (int i = 0; i < arr.size() - 1; ++i)
        // {
        //     max_val = max(max_val, arr[i]);
        //     if (max_val == arr[i]) max_iterator = i;
        // }
        // // Base case: If max equal to the first number, return -1 arrays
        // if (arr[0] == max_val){
        //     for (int i = 0; i < arr.size() -1; ++i){
        //         arr[i] = -1;

        //     }

        // }
        // else {
        // }
        // cout << max_val << endl;
        // return arr;
        int last_updated_member = arr[arr.size() - 1];
        arr[arr.size() - 1] = -1;
        //? Base case: 1 element arrays
        if (arr.size() == 1) return arr;

        //? Continuously update
        for (int i = arr.size() - 2; i >= 0; --i){
            int temp = arr[i];
            arr[i] = last_updated_member;
            last_updated_member = max(temp, last_updated_member);
        }
        return arr;
    }
};
// @lc code=end
