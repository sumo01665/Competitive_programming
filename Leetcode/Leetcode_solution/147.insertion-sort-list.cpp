/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummyHead = new ListNode(20);
        ListNode* curr =head;
        while(curr){
            //? At each iteration, insert element into result
            ListNode * prev = dummyHead;


            while (prev -> next && prev -> next -> val <= curr -> val){
                prev = prev -> next;

            }
            ListNode * next = curr -> next;
            curr -> next = prev -> next; 
            prev -> next = curr;

            //? Next iteration
            curr = next;
        }

        return dummyHead -> next;
    }
};
// @lc code=end

