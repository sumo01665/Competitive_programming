/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * dummyHead = new ListNode(20);
        ListNode * curr = dummyHead;

        while (l1!= NULL || l2 != NULL || carry != 0){
            int x = l1 ? l1 -> val : 0; //? When the # is not there, insert 0

            int y =  l2 ? l2 -> val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr -> next = new ListNode(sum % 10);
            curr = curr -> next;
            //? Advance l1 and l2 if they both exist in the list
            l1 = l1 ? l1 -> next : nullptr;
            l2 = l2 ? l2 -> next : nullptr;
        }
        return dummyHead -> next;






    }
};
// @lc code=end

