#include <bits/stdc++.h> 

using namespace std; 


static auto fast_io = [](){ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); return false;}();

//? Using recursive methods 

/* bool isPowerOfThree(int n) {
    if (n == 1) return true;  

        //Check cases
        if (n % 3 == 0){
            if (n < 4)
                return (n == 3) ? true : false; 


           return isPowerOfThree(n / 3); 
        }
        return false; 
}*/

/*
bool isPowerOfThree(int n) {
       //Loop ways
        
        int check_number = 1; 
        if (n == 1) return true; 
        if (n < 3) return false; //General cases: 
        
        while (check_number < n) check_number *= 3; 
       
        return check_number == n ? true : false; 
        //The ideas: to give the numbers n * n * n * n 
}   */


//? Better looping methods
/*bool isPowerOfThree(int n){
    if (n < 1) return false; 
    
    while (n % 3 == 0){
     n /= 3;
    }
    
    return n == 1; 
}*/



//? O(1) methods
bool isPowerOfThree(int n) { 
        return n > 0 && 1162261467 % n == 0;
} 


int main(){
    cout << isPowerOfThree(10) << endl; 
    cout << 1%3 << endl; 

}