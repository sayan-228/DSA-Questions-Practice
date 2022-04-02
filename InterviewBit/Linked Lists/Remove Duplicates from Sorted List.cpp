/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
        ListNode* t1=A;
        
        if(t1==NULL or t1->next==NULL)  return t1;
            
        ListNode* dup=t1->next;
    
        while(dup){
            if(dup->val==t1->val){
                t1->next=dup->next;
                //free(dup);
                dup=t1->next;
            }
            else{
                t1=t1->next;
                dup=dup->next;
            }
        }
        
        return A;
}
