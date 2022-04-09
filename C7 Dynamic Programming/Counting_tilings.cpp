//? Couting tiles: Counting the number of distinct ways to fill an n x m grid using 1 x 2 and 2 x1 size tiles

#include <bits/stdc++.h>

using namespace std; 


//Macros
 
//Global variables

//Functions 
    //Function prototype

int count(int k, int x){
    //? The numbers of ways to construct a solution for rows 1...k of the grid such that string x corresponds to row k 

}

/*
* Template



* Example: 
    The distinct ways to fill an n x m grid using 1 x 2 and 2 x 1 size tiles for the 4 x 7 grid is 781.
    
? How to approach the problem: 
    We can using the dynamic programming by going through the grid row by row. Each row in a solution can be represented as a string that contains m characters from the set 
        {|-|,|_|,|-_,-_|}
? Since a row consists of m characters and there are four choices for each character, the number of distinct rows is at most 4^m,
? while we can go through the O(4^m) possible states for each row, and foreeach state, there are O(4^m) possible states for the previous row
? In practice, it is a good idea to rotate the grid so that the shorter side has length m, because the factor 4^(2m) will dominatee the time complexity

Todo: Different way to craft this: 
    WE can represent a row using only two characters: a square and a no-lower-border square. This will crewate the 2^m distinct rows instead of the 
    O(n* 2^(2m)) time complexity 

*Special occasion: 
    We can calculating the number of tilings by this formula: 
        Product of a from 1 to the ceil(n/2) multiply by the Product of b from 1 to the ceil(n/2) of 4 multiply by (cos^2(pi * a/(n-1)) + cos^2(pi * b/(m + 1)))
        This formula is very efficient, because it calculates the number of tilings in O(nm) time
        ! Since the answer is a product of real numbers, a problem when using the formula is how to store the intermediate results accurately
*/


//Main function 
int main() {



}
