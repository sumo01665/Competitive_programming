// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem27.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
    // //Two pointers method
    //     for (int i = 0, j = 0; j < nums.size(); ++j){
    //         if (nums[j] != val){
    //             nums[i] = nums[j];
    //             i++;
    //         }
    //     }
    //      return count;
        //? Move the last elements to the missing position
        int i = 0;
        int n = nums.size();
        while(i < n){
            if (nums[i] == val){
                nums[i] = nums[n - 1];
                n--;
            }
            else i++;
        }
            return n;
    }
};


//? Brute force
/*
int count = 0;
        int position = 0;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == val){
                position = i;
                count++;

            }
        }
        for (int i = position; i < count;i++){
            nums[i] = nums[i + count];

        }
        return count;

*/
// @lc code=end
