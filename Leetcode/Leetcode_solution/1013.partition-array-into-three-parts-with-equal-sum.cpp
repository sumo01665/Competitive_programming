/*
 * @lc app=leetcode id=1013 lang=cpp
 *
 * [1013] Partition Array Into Three Parts With Equal Sum
 */

// @lc code=start
/* class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int leftSum = 0, rightSum = 0, totalSum = 0, middleSum = 0;
        for (int i : arr) totalSum+= i;
        if (totalSum %3 != 0) return false;

        int aThirdSum =  totalSum/3;
        for (int i = 0, j = arr.size()-1; i < j;){
            while( leftSum !=  aThirdSum){
                leftSum += arr[i];
                if (i  == j) return false;
                i++;
            }
            while( rightSum !=  aThirdSum){
                rightSum += arr[j];

                if (i  == j) return false;
                j--;
            }
            middleSum = totalSum - rightSum - leftSum;
            cout << "middleSum: "<< middleSum << endl;
            if (compareTheeNumber(leftSum, rightSum, middleSum)) return true;



            // cout <<
            //     "leftSum: " << leftSum <<
            //     " rightSum: " << rightSum <<
            //     " middleSum: " << middleSum <<
            //     endl;

        }
        return false;
    }
    bool compareTheeNumber(int n1, int n2, int n3){
        if (n1 == n2 &&  n2 == n3) return true;
        return false;

    }
}; */

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr)
    {
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0)
            return false;
        int s=0,ans=0;
        for(auto &p:arr)
        {
            s+=p;
            if(s==sum/3)
            {
                ans++;
                s=0;
            }
        }
        return ans>=3?true:false;  ///>3 when all zero

    }
};

// @lc code=end

