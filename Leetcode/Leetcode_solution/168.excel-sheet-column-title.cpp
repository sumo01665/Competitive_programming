// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include "commoncppproblem168.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start

const int ALPHA_MAX = 26;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string reversed_solution;

        int reversed_decimal_base;

        while(columnNumber / ALPHA_MAX != 0){
            reversed_decimal_base += columnNumber % ALPHA_MAX;
        }
        cout << reversed_decimal_base << endl;
        return reversed_solution;
    }


    char letter_fetch(int n){
        if (n > 26) return '-1';
        unordered_map<int, char> character_map;
        char starting_letter = 'A';
        for (int i = 1; i <= ALPHA_MAX; ++i ){
            character_map[i] = starting_letter;
            starting_letter++; //? Move down to the list

        }
        return character_map[n];
    }

    int convert_10th_to_26th(int num){

    }
};
// @lc code=end

