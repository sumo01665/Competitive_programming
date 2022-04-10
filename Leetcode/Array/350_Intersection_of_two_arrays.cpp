/* 
? Description: Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/

#include <bits/stdc++.h>
using namespace std;
static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return 0; }(); 

//Global variables

//Macros 

//Function 
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> solution = {};
        for (int i = 0; i < nums1.size(); i++){
            for (int j = i; j <= nums2.size(); j++){
                if (nums1[j] == nums2[i]){
                    solution.push_back(nums1[j]); 
                
                }
        }
}
    return solution; 
}
//Template
/* 
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
    }
*/
//Main function
int main(){
    vector <int> nums1 = {2,3,3,5}; 
    vector <int> nums2 = {2,3,5}; 
    vector <int> solution =  intersect(nums1, nums2);    
        
    for (int i = 0; i < intersect(nums1, nums2).size(); i++){
        cout << solution[i] << ","; 
    }    
    
}