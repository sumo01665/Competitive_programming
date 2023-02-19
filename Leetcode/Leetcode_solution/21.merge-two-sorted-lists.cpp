/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
void print_linked_list(ListNode *head)
{
    cout << "Head <- ";

    while(head != NULL)
    {
        cout << head->val << " <-- ";
        head = head->next;
    }
    cout << "Tail" << endl;

    return;
}

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * solution = new ListNode(20);
        ListNode * finalSolution = solution;
        while ((list1) && (list2)){
            if( list1-> val >= list2 -> val) {
                solution -> next = list2;
                list2 = list2 -> next;

            }
            else{
                solution -> next = list1;
                list1 = list1 -> next;
            }
            // while (list1 -> next == nullptr && list2 != nullptr){
            //     solution -> next = list2;
            //     solution = solution -> next;
            // }
            // while (list2 -> next == nullptr && list1 != nullptr){
            //     solution -> next = list1;
            //     solution = solution -> next;
            // }
            solution = solution -> next;
        }
        solution -> next = list1 == nullptr ? list2  : list1;
        return finalSolution -> next;
    }
};
// @lc code=end

