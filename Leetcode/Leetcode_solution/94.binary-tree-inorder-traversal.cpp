/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <bits/stdc++.h>

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> solution; // For the return
        stack<TreeNode *> s;
        if (root)
            s.push(root);
        TreeNode *cur;
        while (!s.empty())
        {
            cur = s.top(); // Already filled in for the first
            s.pop();

            if (cur->left)
            {
                s.push(cur->left);
                solution.push_back(cur->val);
            }
            if (cur->right)
            {

                s.push(cur->right);
                solution.push_back(cur->val);
            }
        }
        return solution;
    }
};
// @lc code=end
