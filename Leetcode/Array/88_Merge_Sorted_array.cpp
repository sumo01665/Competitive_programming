#include <bits/stdc++.h>

using namespace std; 

//Macros
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long LL;  
typedef unsigned long long ULL; 

//Function 
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        

}
//Template

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 
        
    //Initialization 
    vector <int> nums1 = {-34,3,5252,532,-34,1,2,4242}; 
    vector <int> nums2 = {-3,4352,5253,23,-4,12,4,2,4,2}; 
    
    int m = nums1.size() + nums2.size(); 
    int n = nums2.size(); 
    
    //? Checking variables
        // cout << "This is m: " << m << endl; 
        // cout << "This is n: " << n << endl; 
    
     
    cout << "This is the number from the first array: " << endl; 
    REP(i,0,nums1.size()){
        cout << nums1[i] << "|";     
    }
}