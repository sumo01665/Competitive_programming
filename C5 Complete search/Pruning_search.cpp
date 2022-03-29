//? Summary: Pruning the search
    //- Add intelligence to the algorithm so that it will notice as soon as possible if a partial solution cannot be extended to a complete search
    
    
#include <bits/stdc++.h>

using namespace std; 

int main(){
    //* Example: Moving from top-left to the bottom-right of the 7*7 table, it takes 111712 to cover all of the unique path
    // feat: Basic algorithm 
    /* 
        We run the algorithm that does not contain any optimizations. We use backtracking to generate all possible paths from the upper-left corner to the lower-right corner and count the number of such paths. 
            => Running times:483 seconds
            => Number of recursive calls: 76 billions
    */ 
    
    // feat: Optimization 1
    /* 
        We move one step down or right. There are always two paths that are symmetric about the diagonal of the grid after the first step.
        => This is the symmetric level of algorithm 
           So we ignore the one go to the right, instead, we calculate only starting from the left and move forward
           => running time: 244 seconds
           => number of recursive calls: 38 billion
           ! All of them are cut in half compared to the first algo
    */
    
    // feat: Optimization 2
    /* 
        If the path reaches the lower-right square before it has visited all other squares of the grid, it is clear that it will not be possible to complete the solution. 
        Therefore, we can eliminate those when it reaches the lower-right square too early
            => Running time: 119 seconds
            => Number of recursive calls: 20 billion
    
    */
    
    // feat: Optimization 3
    /* 
        If the paths touches a wall and can turn either left or right, the grid splits into two parts that contain unvisited squares
        => We terminate the search
            => Running time: 1.8 seconds
            => Number of recursive calls: 221 millions
    */
    
    //feat: Optimization 4
     /* 
        If the path cannot continue forward  but can turn either left or right, the grid splits into two parts that both contain unvisited squares
            => Running time: 0.6 seconds
            => Number of recursive calls: 69 millions
            
     */
}