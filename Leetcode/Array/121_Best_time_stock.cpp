//? Description: Best Time to Buy and Sell Stock
/* 
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/
#include <bits/stdc++.h>

using namespace std;

//Functions
int maxProfit(vector<int>& prices) {
    if (prices.size() <= 1){
        return 0; 
    }
    int solution = 0, lowest = prices[0], highest = prices[0];
    int iMax = INT_MAX; int iMin = 0;
    int rememberMin = 0;
    int rememberMax = 0; 
    int ItrMax = 0, ItrMin = 0; 
    for (int i = 1; i < prices.size(); ++i){
        if (prices[i] < lowest){
            lowest = prices[i];
            cout << "This is the lowest " << lowest << endl; 
            iMin = i; 
            
        }
        if (prices[i] > highest){
            highest = prices[i];
            // cout << "This is the highest now " << highest << endl; 
            iMax = i; 
        }
        if (iMax > iMin){
            rememberMin = prices[iMin];
            rememberMax = prices[iMax]; 
            ItrMax = iMax;
            ItrMin = iMin;
            cout << "This is rememberMin here: " << rememberMin << endl; 
            // cout << "This is rememberMax here: " << rememberMax << endl; 
        }
        if (iMax < iMin){
            highest = rememberMax; 
            lowest = rememberMin; 
            
            // cout << "This is the lowest right here: " << lowest << endl; 
        }
        
        
    }
    cout << "Final lowest: " << lowest << endl;
    cout << "Final highest: " << highest << endl; 
    
    if (ItrMax - ItrMin > 0 && ItrMax != INT_MAX){
        return highest - lowest; 
        
    }
    else{
        return 0; 
    }
    return EXIT_SUCCESS; 
    
}

//? Better solution: I do not have to remember best or smallest, I just need to use if the next number (which is obviously behind) minus the previous smallest to 
//? see the difference.
int maxProfit2(vector<int>& prices) {

    if (prices.size() < 2) return 0; 
    int smallest = prices[0]; 
    int profit = 0; 
    for (int i = 1; i <prices.size(); ++i){
        profit = max(profit, prices[i] - smallest);
        smallest = min(smallest, prices[i]);
    }
    cout << profit << "\n";
    cout << smallest << "\n"; 
    return profit; 

}

//? Put it in another perspective
int maxProfit3(vector<int>& prices) {
    int mx = INT_MIN;
    int ans = INT_MIN; 
    for (int i  = n - 1; i >= 0; i--){
        ans  = max(ans, mx - prices[i]);
        mx  = max(mx, prices[i]); 
    }
    ans = max(ans, 0); 
    return ans; 
}
//! Right code, but not quite efficient...
//Templates
/* 
int maxProfit(vector<int>& prices) {
    
}

*/

//Main functions
int main(){
    vector <int> prices = {7,1,5,3,6,4};
    // cout << maxProfit(prices); 
    cout << maxProfit2(prices);

}