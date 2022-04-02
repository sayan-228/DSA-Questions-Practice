/*
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

For example,
Given 1->2->3->3->4->4->5, return 1->2->5.

Given 1->1->1->2->3, return 2->3.

https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii/
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
        
        ListNode* fakeHead = new ListNode(0);
        fakeHead->next=A;
        ListNode* prev=fakeHead;
    
        
        while(t1){
            while(t1->next and t1->next->val==t1->val)   t1=t1->next;
                
            if (prev->next == t1)    prev = prev->next; 
            else    prev->next = t1->next;
            
            t1 = t1 ->next;
            
        }
        
        return fakeHead->next;
}
