/* 
? Description: 
You are given two integers, x and y, which represent your current location on a Cartesian grid: (x, y). You are also given an array points where each points{i] = {ai, bi] represents that a point exists at (ai, bi). A point is valid if it shares the same x-coordinate or the same y-coordinate as your location.

Return the index (0-indexed) of the valid point with the smallest Manhattan distance from your current location. If there are multiple, return the valid point with the smallest index. If there are no valid points, return -1.

The Manhattan distance between two points (x1, y1) and (x2, y2) is abs(x1 - x2) + abs(y1 - y2).
*/
static int fast_io = [](){ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); return 0;}(); 
#include <bits/stdc++.h>

using namespace std; 

//Function
//feat: Obvious implementation
int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    /* 
        First, we need to get all the indices of the points that is in the function 
    
    */
    vector <vector<int>> solution = {};
    int min = 9999;
    int distance =0; 
    int sol= 0; 
    bool existed = false; 
    for (int i = 0; i < points.size(); i++){
        for (int j = 0; j < points[i].size(); j++){ 
            
        }
        if(points[i][0] == x || points[i][1] == y){
            existed = true; 
            distance = abs(x - points[i][0]) + abs(y -points[i][1]);
            cout << distance << endl; 
            if (distance < min){
                min = distance;  
                sol = i; 
            }   
            
                
        }
        
        // cout << endl; 
    }
    if (existed == false) return -1; 
    else return sol; 
    return 0; 
    /* 
    feat: Checking the solution arrays
    for (int i = 0; i < solution.size(); i++){
        for (int j = 0; j < solution[i].size(); j++ ){
            cout << solution[i][j] << " ";
            
        }
        cout << endl; 
    } */
    
}

//feat: Better implementation 
int nearestValidPoint2(int x, int y, vector<vector<int>>& points) {
    vector <vector<int>> solution = {};
    int min = INT_MAX;
    int distance =0; 
    int sol= -1; 
    //? Don't need to check for existence if there's already an answer, just need to start it at -1. 
    for (int i = 0; i < points.size(); i++){
        if(points[i][0] == x || points[i][1] == y){
            distance = abs(x - points[i][0]) + abs(y -points[i][1]);
            if (distance < min){
                min = distance;  
                sol = i; 
            }   
            
                
        }
        
        // cout << endl; 
    }
    return sol;  
}
//Template
/* 
int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
}

*/

// Main function 

int main () {
    
    vector<vector<int>> points = {{1,2},{3,1},{2,4},{2,3},{4,4}};
    int x = 3;
    int y = 4; 
    
    for (int i = 0; i < points.size(); i++){
        for (int j = 0; j < points[i].size(); j++){
        // cout << points[i][j] << " ";  
        }
        // cout << endl; 
    }
    cout << nearestValidPoint(x,y, points); 
    
}