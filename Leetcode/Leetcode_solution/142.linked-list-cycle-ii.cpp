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
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !(head -> next)) return false;
        else{
            ListNode * fast = head -> next;
            ListNode * slow = head;
            while (fast != slow){
                if (!fast || !(fast -> next)) return false;
                fast = (fast) -> next -> next;
                slow = (slow) -> next;

            }
        }
    return true;
    }


    ListNode *detectCycle(ListNode *head) {
    //? My solution 
        if (!hasCycle(head)) return NULL;
        else{
            ListNode * slow = head;
            unordered_map<ListNode* , int> mappo;
            while (slow){
                //
                mappo[slow]++;
                if (mappo[slow] == 2) return slow;
                slow = slow -> next;
            }

        }
        return NULL;

    }
        return NULL;
    }
};
// @lc code=end

