//Levenshtein distance is the minimum editting operator that can transform a string into another string
/* 
    This is useful for when changing either: 
        Insert a character: ABC => ABCA
        Remove a character: ABC => AC
        Modify a character: ABC => ADC
    * Example: 
        The edit distance between LOVE and MOVIE is 2, because we need to Modify L to M (is the first edit distance), and insert an I between a V and a E (which is the second one to change)
*/

//Function to solve the distance between the two: 
//Function prototype: cost[]

#include <bits/stdc++.h>
using namespace std; 

//? Function prototype: 

int cost(int a, int b){
    //cost(a,b) = 0 if x[a] = y[b], and otherwise cost(a,b) = 1;
    
    
    
}
int distance(int a, int b){
    return min(distance(a,b - 1) + 1,distance(a-1,b) + 1, distance(a-1, b-1) + cost(a,b));
    //A few things  to consider
    /* 
    ? distance(a,b -1): insert a character at the end of the x
    ? distance(a - 1,b): remove a character at the end of the x
    ? distance (a - 1, b - 1): match or modify the last character of x
    In the two first cases, one editing operation is needed (insert or remove). In the last case, if x[a] = y[b], we can match the last characters without editing, and otherwise
    one editing operation is needed (modify).
    */
    
}

int main(){
    // The code here may not be worked, since it is more complicated to implement that actual coding. Therefore, it is just a summary of the idea using the dynamic programming in place. 
}