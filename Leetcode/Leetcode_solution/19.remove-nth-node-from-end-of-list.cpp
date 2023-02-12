/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy -> next = head;
        int length = 0;
        ListNode * first = head;
        while (first){
            ++length;
            first = first -> next;
        }
        //? Overtake the base cases: if length != 0 && n != 1
        length -= n;
        first = dummy;
        while (length  > 0){
            --length;
            first = first -> next;
        }
        first -> next  = first -> next -> next;
        return dummy -> next;
    }
};
// @lc code=end
