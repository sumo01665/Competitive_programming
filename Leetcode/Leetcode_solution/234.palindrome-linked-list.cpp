/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    ListNode * reverseLinkedList(ListNode* head){
        ListNode * prev = nullptr;
        while (head -> next){
            ListNode * cur = head -> next;
            head -> next = prev;
            prev  = head;
            head = cur;

        }
        return head;

    }

    void print(ListNode * head){
        while (head){
            if (head -> next == nullptr){
                cout << head -> val << endl;
            }

            cout << head -> val << "->";
            head = head -> next;

        }

    }
    bool isPalindrome(ListNode* head) {
        if (head  == nullptr) return false;
        ListNode * cur = head;
        ListNode * reverse = reverseLinkedList(cur);
        print(head);
        print(reverse);
        while (head && head -> next){
            if (head -> val != reverse -> val) return false;
            head = head -> next;
            reverse = reverse -> next;

        }


        return true;
    }
};
// @lc code=end

