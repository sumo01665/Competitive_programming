class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int longest_length = 1; //Sliding windows
        int zero_count = 0;

        for  (int right = 0; right < nums.size(); ++right){
            if (nums[right] == 0) zero_count++;
            //? Sliding windows
            while (zero_count == 2) {
                    if (nums[left] == 0){
                        zero_count--;
                    }
                    left++;

            }
            longest_length = max(longest_length, right - left + 1);


        }
        return longest_length;
    }
};