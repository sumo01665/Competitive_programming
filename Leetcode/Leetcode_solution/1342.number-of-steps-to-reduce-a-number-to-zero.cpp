/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution
{
public:
//? Bitmask solution
    int numberOfSteps(int num)
    {
        int count = 0;
        while (num!= 0){
            if ((num & 1) == 0){ //feat: bitmask = 0x00000001
                 num/=2;
                count++;
            }
            else
            {
                num -= 1;
                count++;
            }

        }
        return count;
    }
};


/*  //? Straight forward approach
        int count = 0;
        while (num != 0)
        {
            if (num % 2 == 0)
            {
                num/=2;
                count++;
            }
            else
            {
                num -= 1;
                count++;
            }
        }

        return count; */
// @lc code=end
