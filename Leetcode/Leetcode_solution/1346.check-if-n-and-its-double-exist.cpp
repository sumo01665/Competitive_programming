/*
 * @lc app=leetcode id=1346 lang=cpp
 *
 * [1346] Check If N and Its Double Exist
 */

// @lc code=start
class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        //? Cheeky test-case, not right
        // sort(arr.rbegin(), arr.rend());
        // for (int i = 0; i < arr.size(); ++i)
        // {
        //     if (arr[i] % 2 == 0)
        //     {

        //         for (int j = 0; j < arr.size(); ++j)
        //         {
        //             if (arr[j] == arr[i] / 2)
        //             {
        //                 cout << "arr[j]: " << arr[j] << "arr[i]: " << arr[i] << endl;
        //                 return true;
        //             }
        //         }
        //     }
        // }
        //     return false;

        //? Hashmap - 1 edge case
        // int count = 0;
        // unordered_map <int, int> num;
        // for (int i  = 0; i < arr.size(); ++i){
        //     if (arr[i] %2 == 0) num[arr[i]/2]++;
        //     if(arr[i] == 0) count++;
        // }
        // for (int i = 0; i < arr.size(); ++i){
        //     if (num.find(arr[i])!= num.end()) {
        //         return true;
        //     }
        // }
        // return false;
        for (int i = 0; i < arr.size(); ++i){
            for (int j = 0; j < arr.size(); ++j){
                if(i != j && arr[i]  == arr[j]*2) return true;
            }
        }
        return false;
    }
};
// @lc code=end
