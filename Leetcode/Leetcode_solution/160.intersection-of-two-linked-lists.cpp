/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //? Brute force solution
        // while (headA != nullptr){
        //     ListNode *pointerB = headB;
        //     while(pointerB != nullptr){
        //         if (headA == pointerB) return headA;
        //         pointerB = pointerB -> next;
        //     }
        //     headA = headA-> next;

        // }
        // return nullptr;

        //? Hash set
        //  set <ListNode*> nodes_in_B;

        //  while (headB != nullptr){
        //     nodes_in_B.insert(headB);
        //     headB = headB -> next;

        //  }

        //  while (headA != nullptr){
        //     if (nodes_in_B.find(headA) != nodes_in_B.end()) return headA;
        //     headA = headA -> next;
        //  }
        //  return nullptr;

        //? Two pointers technique
        ListNode *pA = headA;
        ListNode *pB = headB;
        while (pA != pB){
            pA = pA == nullptr ? headB : pA -> next;
            pB = pB == nullptr ? headA : pB -> next;
        }
        return pA; 

    }

};
// @lc code=end

