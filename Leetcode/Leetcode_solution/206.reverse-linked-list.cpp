/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
    //? Brute force (aka dummy ListNode)
    //? Try two data structures to hold the data

        //* Using the temporary next, append with a previous, then update that previous
        // if (!(head && head->next)) return head;
        // ListNode* prev = nullptr;

        // while(head){
        //     ListNode* temp = head -> next;
        //     head -> next = prev;
        //     prev = head;
        //     head = temp;


        // }
        // return prev;


    //? overtune
        if (!head) return head;
        ListNode* curr= head;

        while(head -> next){
            ListNode* p = head -> next;
            head -> next = p -> next;
            p -> next = curr;
            curr = p ;
        }

        return curr;
        // int length = 0;
        // ListNode * current = head;
        // while (current){
        //     current = current -> next;
        //     ++length;
        // }
        // for (int i = 0; i < length; ++i){
        //     if (i == length -1){
        //         swap(head, length);
        //     }
        // }
    }
};
// @lc code=end

