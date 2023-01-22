/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        //? Too many if-case
        /* bool down = false;
        int flipped = 0;
        if(arr[1] > arr[0]) flipped++;
        for (int i = 1; i < arr.size(); ++i){
            if (flipped > 2) return false;
            // ? Not strictly increasing
            if (arr[i] == arr[i - 1]) return false;
            if (arr[i] < arr[i - 1] && flipped == 1){
                flipped++;
                down = true;
            }
            if (arr[i] > arr[i - 1] && flipped == 2) return false;

        }
        return true; */

        //? One pass solution
        // int length = arr.size() - 1;
        // int i = 0;

        // //? Moving up the mountain
        // while (i < length && arr[i] < arr[i + 1]) ++i;

        // //? Base case (can't be top of last element)'
        // if (i == 0 || i == length) return false;

        // //? Moving down the mountain
        // while (i < length && arr[i] > arr[i + 1]) ++i;
        // return (i == length);

        //? Two pointer solution
        int n=arr.size();
        int i=0,j=n-1;
        while(arr[i] < arr[i+1] && i+1 <= n-1)i++;
        while(arr[j] < arr[j-1] && j-1 > 0) j--;
        return true;
    }
};
// @lc code=end

