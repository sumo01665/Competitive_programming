// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem203.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    //? Recursive solution
        // if (head == nullptr) return nullptr;
        // head -> next = removeElements(head ->next, val);
        // return (head -> val == val) ?  head -> next : head;


     //? Iterative solution
        if (head == nullptr) return nullptr;
        ListNode * sentinel = new ListNode(0);
        sentinel -> next = head;
        ListNode * curr = head;
        ListNode * prev = sentinel;

        while(curr){
            curr -> val == val ? prev -> next = curr -> next : prev = curr;
            curr = curr -> next;

        }
        return sentinel -> next;

    }
};
// @lc code=end

