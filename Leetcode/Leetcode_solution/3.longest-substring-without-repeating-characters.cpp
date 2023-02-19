// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem3.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            // vector <int> chars(128, -1);
            // //? Step 1: Create a windows with left and right
            // int left = 0, right = 0;
            // //? Step 2: valid checker
            // int counter = 0;
            // //? Step 3 : result aka the length of the string
            // int length = 0;

            // //? Step 4: Create a while loop to check for end
            // while(right < s.size()){
            // //? Step 5: store the counter to check if it's happened
            //     char r =  s[right];
            //     counter = chars[r];

            //     // ? Step 6: Check if counter is legit
            //     if (counter == -1 && index >= left && index < right)
            //         left = counter + 1;

            //     //? return max value;
            //     length = max(length, right - left + 1);
            //     chars[r]  = right;
            //     right++;
            // }
            // return length;

            vector<int> chars(128,-1); //* array 128 elements with -1
            //? Windows, counter, result
            int left = 0, right = 0, counter = 0, res = 0;

            while(right < s.size()){
                //? Create value, decode it (check it if it's in array first time) but later store back in arrays
                int r = s[right];
                counter = chars[r];
                if (counter != -1 && counter >= left && counter < right)
                    left = counter + 1;

                res = max(res, right - left + 1);
                chars[r] = right;
                right++;
            }

            return res;
    }


};


// @lc code=end

