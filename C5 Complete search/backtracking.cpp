//? Summary: Backtracking
    //- Finding the first solution, then expand from there
    
#include <bits/stdc++.h>
using namespace std; 

//Function 
//? This function will return the number of solutions to count 
void search(int y)
{
    int column[] = {3,43,4};
    int diag1[] = {};
    int diag2[] = {};
    int n = 4; //This is the size of the table
    int count = 0; 
    if (y == n){
        count++; 
        return; 
        
    }
    for (int x= 0; x < n; x++){
        if (column[x] || diag1[x+y]|| diag2[x-y+n-1] ) continue; 
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1); 
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
    
    /* 
    Remark: 
        The solution for the backtracking algorithm tell us that q(8) = 92. q(16) = 14772512, which is a very large number
        This algorithm will take around a minute to do q(16) on modern computer (as spoken in 2018)
        The record is q(27), which is an extraordinary number
    */
}
int main() {

}