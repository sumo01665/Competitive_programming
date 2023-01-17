// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1089.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    //? Recreate the solution
        int duplicate = 0;
        int length = arr.size() - 1;
        //? Not overshoot the solution, i = length - duplicate
        for (int i = 0; i <= length - duplicate; ++i){

            if (arr[i] == 0){
                //? Edge cases if 0 happens to be the last number
                if ( i == length - duplicate){
                    arr[length] = 0;
                    length -= 1;
                    // cout << "Ayo I hit you" << endl;
                    break;
                }
                /// @brief Indicate the letter where it would hit
                /// @param arr
                duplicate++;

            }

        }
        cout << duplicate << endl;
        for (int i = length - duplicate; i >= 0; --i){
            // cout << "arr[length]: " << arr[length] << endl; //?  Output arr[length]
            // int *p = arr;

            //? try manual move, always stuck 1 number even using arr[i] = arr[i + duplicate] (assuming the base cases is )
            if (arr[i] == 0) {
                arr[i + duplicate] = 0;
                duplicate--;
                arr[i + duplicate] = 0;
            }
            else arr[i + duplicate] = arr[i];


        }
        // cout << duplicate << endl;

    }
};



/*
       int possibleDups = 0;
        int length_ = arr.size() - 1;

        // Find the number of zeros to be duplicated
        // Stopping when left points beyond the last element in the original array
        // which would be part of the modified array
        for (int left = 0; left <= length_ - possibleDups; left++) {

            // Count the zeros
            if (arr[left] == 0) {

                // Edge case: This zero can't be duplicated. We have no more space,
                // as left is pointing to the last element which could be included
                if (left == length_ - possibleDups) {
                    // For this zero we just copy it without duplication.
                    arr[length_] = 0;
                    length_ -= 1;
                    break;
                }
                possibleDups++;
            }
        }

        // Start backwards from the last element which would be part of new array.
        int last = length_ - possibleDups;

        // Copy zero twice, and non zero once.
        for (int i = last; i >= 0; i--) {
            if (arr[i] == 0) {
                arr[i + possibleDups] = 0;
                possibleDups--;
                arr[i + possibleDups] = 0;
            } else {
                arr[i + possibleDups] = arr[i];
            }
        }

*/
// @lc code=end

