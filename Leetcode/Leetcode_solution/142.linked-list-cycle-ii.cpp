/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
 #include <bits/stdc++.h>
 using namespace std; 
class Solution {
public:
    //? My solution
    // bool hasCycle(ListNode *head) {
    //     if (!head || !(head -> next)) return false;
    //     else{
    //         ListNode * fast = head -> next;
    //         ListNode * slow = head;
    //         while (fast != slow){
    //             if (!fast || !(fast -> next)) return false;
    //             fast = (fast) -> next -> next;
    //             slow = (slow) -> next;

    //         }
    //     }
    // return true;
    // }

    //? Second implementation
    ListNode* intersect(ListNode* head){
        ListNode * slow = head;
        ListNode * fast = head;

        while (fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
             if (fast == slow){
                return fast;
             }
        }
        return NULL;


    }


    ListNode *detectCycle(ListNode *head) {
    //? My solution
        // if (!hasCycle(head)) return NULL;
        // else{
        //     ListNode * slow = head;
        //     unordered_map<ListNode* , int> mappo;
        //     while (slow){
        //         //
        //         mappo[slow]++;
        //         if (mappo[slow] == 2) return slow;
        //         slow = slow -> next;
        //     }
        // }
        // return NULL;

    //? Hash set
        // set<ListNode*> visited;
        // ListNode * node = head;
        // while (node != NULL){
        //     if (visited.find(node) != visited.end()){
        //         return node;
        //     }
        //     visited.insert(node);
        //     node = node -> next;
        // }
        // return NULL;

    //? Tortoise and hare
        if (head == NULL) return NULL;
        ListNode * inter = intersect(head);
        if (inter == NULL) return NULL;
        ListNode * ptr1 = head;
        ListNode * ptr2 = inter;
        while(ptr1 != ptr2){
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
        }
        return ptr1;
    }


};
// @lc code=end

