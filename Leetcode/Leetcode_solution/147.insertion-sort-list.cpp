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
        ListNode* current = head;
        //? Insertion
        while (current != nullptr && current-> next != nullptr){
            for (int i = 0; )
            if (current > current -> next ){
                swap(current, current -> next);
                current = current -> next;
            }
        }
        swap(current, current -> next);

        return current;
    }
};
// @lc code=end

