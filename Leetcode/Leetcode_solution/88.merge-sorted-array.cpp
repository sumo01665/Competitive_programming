// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem88.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //? Brute force solution
        // for ( int i = 0; i < n; ++i){
        //     nums1[i + m] = nums2[i];
        // }
        // sort(nums1.begin(), nums1.end());

        //? Brainy solution
        int p1 = m - 1;
        int p2 = n - 1;

        // And move p backwards through the array, each time writing
        // the smallest value pointed at by p1 or p2.
        for (int p = m + n - 1; p >= 0; p--) {
            if (p2 < 0) {
                break;
            }

            //? Going backward to save some spaces
            
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1--];
            } else {
                nums1[p] = nums2[p2--];
            }
        }
    }
};
// @lc code=end

