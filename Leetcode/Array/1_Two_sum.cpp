#include <bits/stdc++.h>

using namespace std; 

//Function 
vector <int> twoSum (vector <int> & nums, int target){

    for (int i = 0; i < nums.size(); i++){
        for (int j = i + 1; j < nums.size(); j++){
            if (nums[i]+ nums[j] == target){
                return {i,j}; 
            }
            
        }
        
    }
    return {0};
    //? The runtime of this function here is O(n^2)
}

vector <int> twoSum2 (vector <int> & nums, int target){
    map <int, int> hash; 
    vector <int> result; 
    for (int i = 0; i < nums.size(); i++){
        if (hash.find(target - nums[i]) != hash.end()){
            result.push_back(hash[target - nums[i]]); 
            result.push_back(i); 
            return result; 
        }
        else{
            hash[nums[i]] = i;
        }
        
    }
    
}
/* 
TODO: TEMPLATE FOR SOLVING THE PROBLEM 
vector <int> twoSum (vector <int> & nums, int target){
    
    
}
*/
int main() {
   vector <int> nums = {2,7,11,15};
   int target = 9; 
//    vector<int> number = twoSum(nums,target); 
//    printf("[%d, %d]", number[0], number[1]); 
   /* for (int i = 0; i < twoSum(nums,target).size(); i++){
        cout << twoSum(nums,target)[i] << endl; 
   } */
    vector<int> number = twoSum2(nums,target); 
    
    
}