/*
Problem Description

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
Try solving it using constant additional space.

Example:

Input: 
              ______
             |     |
             \/    |
    1 -> 2 -> 3 -> 4

Return the node corresponding to node 3.

https://www.interviewbit.com/problems/list-cycle/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {

    ListNode* t1=A;
        unordered_set <ListNode*> us;
        
        while (t1){
            if (us.find(t1)!= us.end())  return t1;
            us.insert(t1);
            t1=t1->next;
        }
        
        return NULL;
}
