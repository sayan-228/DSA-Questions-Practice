/*
Merge two sorted linked lists and return it as a new list. 

The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

For example, given following linked lists :
  5 -> 8 -> 20 
  4 -> 11 -> 15
The merged list should be :
4 -> 5 -> 8 -> 11 -> 15 -> 20

https://www.interviewbit.com/problems/merge-two-sorted-lists/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *t1=A;
    ListNode *t2=B;
    
    if(!t1)  return t2;
    if(!t2) return t1;
        
    ListNode *res = new ListNode(0);
    ListNode *resPtr = res;
        
    while(t1 and t2){
        if(t1->val <= t2->val)
        {
            res->next = t1;
            t1 = t1->next;
        }
        else
        {
            res->next = t2;
            t2 = t2->next;
        }
        res=res->next;
    }
        
    while(t1){
        res->next = t1;
        res=res->next;
        t1 = t1->next;
    }
        
    while(t2){
        res->next = t2;
        res=res->next;
        t2 = t2->next;
    }
        
    return resPtr->next;
}
