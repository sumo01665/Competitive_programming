#include <bits/stdc++.h>

// Two arrays solution 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int remove; 
        for (int i = 1; i < nums.size(); ++i){ 
            if (nums[i] == nums[i - 1]){ 
                nums.erase(nums.begin() + i); 


            }


        }


    
    }    
   void  print_array(vector<int> nums){
        for (int i = 0; i < nums.size(); ++i){
            cout << nums[i]

            if (i = nums.size() - 1) cout << "."; 
            else cou
        }

};