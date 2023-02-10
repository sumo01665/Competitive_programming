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
        bool has_swapped = false;
        ListNode* header = head;
        //? Insertion
        while( head != nullptr || head->next != nullptr){

            while (head -> next -> val <  head -> val){
                swap(head -> next, head);
                return head;
            }

            if (has_swapped == true){

            }

        }



        return head;
    }
};
// @lc code=end

