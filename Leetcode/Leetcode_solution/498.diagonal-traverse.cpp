/*
 * @lc app=leetcode id=498 lang=cpp
 *
 * [498] Diagonal Traverse
 */

// @lc code=start

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        // vector <int> diagonal;
        // int outer = mat.size();
        // int full_square = outer * outer;
        // int inner = mat.size() - 1; //? Inner square of the matrix
        // int small_square = inner * inner;
        // int loop = full_square - small_square;


        // for (int row = 0; row < mat.size(); ++row){
        //* 3 loops O(n^3)
        //     for (int column = 0; column < mat[row].size(); ++column){
        //         //? Brute force solution
        //         for (int cycle = 0; cycle < loop; ++cycle){
        //             int m, n;
        //             if(cycle %2 != 0) {
        //                 m  = 0;
        //                 n = column;
        //                 while (m <= cycle){
        //                     diagonal.push_back(mat[m++][n--]);
        //                 }
        //             }
        //             if(cycle %2 == 0) {
        //                 m  = row;
        //                 n = 0;
        //                 while (n <= cycle){
        //                     diagonal.push_back(mat[m--][n++]);
        //                 }
        //             }
        //         }
        //     }

        // }

        // return diagonal;
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> vec(m + n ,vector<int>());
        vector<int> solution;

        for (int i = 0; i < mat.size(); ++i){
            for (int j = 0; j < mat[0].size(); ++j){
                vec[i + j].push_back(mat[i][j]);

            }
        }
        for (int i = 0; i < vec.size(); ++i){
            if (i % 2 == 0) reverse(vec[i].begin(), vec[i].end());
            for (int j = 0; j < vec[i].size(); ++j){
                solution.push_back(vec[i][j]);
            }
        }
        return solution;
    }
};
// @lc code=end

