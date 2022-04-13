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
    map <int, int> myMap1; 
    map <int, int> myMap2;
    vector <int> timesOccured1; 
    vector <int> number1; 
    vector <int> timesOccured2; 
    vector <int> number2; 
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    
    int count = 0; 
    for (int i = 1; i < nums1.size(); i++){
        if (nums1[i] != nums1[i - 1]){
            timesOccured1.push_back(count); 
            number1.push_back(nums1[i - 1]); 
            count = 0; 
            
        }
        count++;
    }
    
    return timesOccured1; 
    //The runtime for this code is horrid, that's why I will do the second implementation here
}

//? Second implementation for the code
vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end()); 
    sort(nums2.begin(), nums2.end()); 
    int n1 = nums1.size(); 
    int n2 = nums2.size(); 
    int i1 = 0, i2 = 0;
    vector <int> res; 
    while(i1 < n1 && i2 < n2){
        if (nums1[i1] == nums2[i2]){
            res.push_back(nums1[i1]); 
            i1++; 
            i2++;
            
        }
        else if (nums1[i1] > nums2[i2]){
            i2++;
        }
        else{
            i1++; 
            
        }
        
    }
    return res; 
    // Time: O(max(m, n) log(max(m, n))) Space: O(m + n)
}

//? Hash table solution 
vector<int> intersect3(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> dict; 
        vector <int> solution; 
        for (int i = 0; i < nums1.size(); i++) dict[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++){
        if (--dict[nums2[i]] >= 0){
            solution.push_back(nums2[i]);
        }
        }; 
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
            
    vector <int> solution2 = intersect2(nums1, nums2);    

    vector <int> solution3 = intersect3(nums1, nums2); 
    
    unordered_map<int, int> dict; 
    vector <int> res; 
    for (int i = 0; i < (int)nums1.size(); i++) dict[nums1[i]]++; 
    for (int i = 0; i < (int)nums2.size();i++)
        if (--dict[nums2[i]] >= 0){
            res.push_back(nums2[i]);
        }
    for (auto itr = dict.begin(); itr != dict.end(); ++itr){
        cout << itr -> first << ", " << itr -> second << endl; 
        
    }
    // ? Printing out the map here
   /*  multimap <int, int> number; 
    for (int i = 0; i < nums1.size(); i++){
        number.insert({i, nums1[i]}); 
        
    }
    
    for (auto itr = number.begin(); itr != number.end(); ++itr){
        cout << itr -> first  << ", " << itr -> second << endl; 
    } */
}