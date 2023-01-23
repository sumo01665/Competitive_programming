/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        // // //? Brute force solution

        // //? Redo the first solution
        // vector<int> solution;
        // int rows = matrix.size();
        // int cols = matrix[0].size();
        // int left = 0, up = 0, right = cols - 1, down = rows - 1;

        // //? The pair will be smaller internally
        // while (solution.size() < rows * cols)
        // {
        //     //? left to right
        //     for (int col = left; col <= right; ++col)
        //     {
        //         solution.push_back(matrix[up][col]);
        //     }
        //     //? Up to bottom
        //     for (int row = up + 1; row <= down; ++row)
        //     {
        //         solution.push_back(matrix[row][right]);
        //     }

        //     //? On different row
        //     if (up != down)
        //     {
        //         for (int col = right - 1; col >= left; --col)
        //         {
        //             solution.push_back(matrix[down][col]);
        //         }
        //     }
        //     //?
        //     if (left != right)
        //     {
        //         for (int row = down - 1; row > up; --row)
        //         {
        //             solution.push_back(matrix[row][left]);
        //         }
        //     }


        //     //? Update variables
        //     left++;
        //     right--;
        //     up++;
        //     down--;
        // }
        // return solution;

    //? Solution map
    int VISITED = 1000;
    int rows = matrix.size();
    int columns = matrix[0].size();
    //? order: right, down, left, up
    vector<vector<int>> directions = {{0,1},
                                      {1,0},
                                    {0, -1},
                                    {-1, 0}};

    //? right = 0, down  = 1, left = 2, up = 3
    int currentDirection = 0;
    int changeDirection = 0;

    int row = 0;
    int col = 0;
    vector<int> solution;
    solution.push_back(matrix[0][0]);
    matrix[0][0] = VISITED;

     while (changeDirection < 2) {
     //? 0 < row < rows && 0 < col < cols && visited or not
            while (row + directions[currentDirection][0] >= 0 &&
                   row + directions[currentDirection][0] < rows &&
                   col + directions[currentDirection][1] >= 0 &&
                   col + directions[currentDirection][1] < columns &&
                   matrix[row + directions[currentDirection][0]]
                   [col + directions[currentDirection][1]] != VISITED) {
                // Reset this to 0 since we did not break and change the direction.
                changeDirection = 0;
                // Calculate the next place that we will move to. //? row if row is in the first location, col if col is in the first location (one pivot point)
                row = row + directions[currentDirection][0];
                col = col + directions[currentDirection][1];
                solution.push_back(matrix[row][col]);
                matrix[row][col] = VISITED;
            }
            //? Change our direction (left, down, right, up)
            currentDirection = (currentDirection + 1) % 4;
            // Increment change_direction because we changed our direction, try +2 solution, if not return the full direction 
            changeDirection++;
        }
        return solution;

    }
};
// @lc code=end
