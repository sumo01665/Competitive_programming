//? Description: Write an algorithm to determine if a number n is happy.
/* 
A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.

*/

#include <bits/stdc++.h>
using namespace std; 

//Straightforward solution

int check_digit(int n){
    int count = 0; 
    while(n != 0){
    
        n /= 10;
        count++; 
    }
    return count; 
}
int sum_loop(int n){
    int sum = 0;
    while(n != 0){
        int digit_addition = n%10; 
        sum += pow(digit_addition, 2); 
        n/= 10; 
        // cout << sum << endl; 
        
    } 
    // cout << "This is the digit of the current number: " << check_digit(sum) << endl; 
    // cout << "This is the sum of the current number: " << sum << endl;
    if (check_digit(sum) == 1 || check_digit(sum) == 0){
        return sum;  

    }
    sum_loop(sum); 
    return EXIT_FAILURE; 
}
bool isHappy(int n) {
    if (sum_loop(n) == 1){
        return true; 
    }
    return false; 
}
//! The problem: It works fine, but it can't detect whenever the "loop endlessly in a cycle"

//? Second attempt (hash set)
int getNext(int n){
    int totalSum = 0; 
    while (n > 0){
        int d = n % 10; 
        n = n/10; 
        totalSum += d * d;
        // cout << totalSum << endl; 
    }
    return totalSum; 
}
bool isHappy2(int n) {
    set<int> seen = {}; 
    while (n != 1 && seen.count(n) != true){
        seen.insert(n); 
        n = getNext(n); 
        // cout << "This is the n I'm looking at: " << n << endl; 
    }
    return n == 1; 
}

//? Third attempt: Floyd's Cycle-Finding Algorithm 
int getNext2(int n){
    int totalSum = 0; 
    while (n > 0){
    int d = n%10; 
    n = n/10; 
    totalSum += pow(d,2); 
    
    }
    return totalSum; 

}
bool isHappy3(int n) {
    int slowRunner = n; 
    int fastRunner = getNext2(n);
    while (fastRunner != 1 && slowRunner != fastRunner){
        slowRunner = getNext2(slowRunner); 
        fastRunner = getNext2(getNext2(fastRunner)); 
    }
    
    return fastRunner == 1; 
}


//Template
/* 
bool isHappy(int n) {
    
}
*/
int main(){
    int number = 19; 
    cout << isHappy(number) << endl; 
    cout << isHappy2(number) << endl; 

}

