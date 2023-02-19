// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem328.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
//  void print(ListNode * head){
//     while (head){
//             if (!(head -> next)){
//                 cout << head -> val;
//                 return;
//             }
//             cout << head -> val << "-> ";
//             head = head -> next;
//         }

//  }
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        //? Brute force solution
        // if (head == nullptr) return head;
        // ListNode * curr = head;
        // ListNode * even = new ListNode(20);
        // ListNode * eveCur = even;
        // ListNode * odd = new ListNode(21);
        // ListNode * oddCur = odd;
        // ListNode *result = new ListNode(1);
        // ListNode * finalResult = result;
        // int count = 0;
        // while( curr){
        //     if (count %2 == 1){
        //         eveCur -> next = curr;
        //         eveCur = eveCur -> next;

        //     }
        //     else{
        //         cout << curr -> val << endl;
        //         oddCur -> next = curr;
        //         oddCur = oddCur -> next;
        //     }
        //     curr = curr -> next;
        //     count++;

        // }
        // while (count > 0){
        //     if (count %2 == 0){
        //         result -> next = odd -> next;
        //         odd = odd -> next;
        //         result = result -> next;

        //     }
        //      else{
        //         result -> next = even -> next;
        //         even = even -> next;
        //         result = result -> next;

        //     }
        //     --count;

        // }
        // return  finalResult  -> next;

        if (head == nullptr) return head;
        ListNode * odd = head, *even = odd -> next, *evenHead = even;
        while (even && even -> next){ //? odd still in the list
            odd -> next = even -> next;
            odd = odd -> next;
            even -> next = odd -> next;
            even  = even -> next;
        }
        odd -> next = evenHead;
        return head;
    //     if (head == nullptr) return head;
    //    ListNode * odd =head, * even = head -> next, * evenHead = even;
    //     while (even && even -> next){
    //         odd -> next = even -> next;
    //         odd = odd -> next;
    //         even -> next = odd -> next;
    //         even = even -> next;

    //     }
    //     odd -> next = evenHead;
    //     return head;
    }
};
// @lc code=end

