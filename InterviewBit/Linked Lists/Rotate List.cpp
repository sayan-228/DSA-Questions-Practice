/*
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.

https://www.interviewbit.com/problems/rotate-list/
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 int findLen(ListNode *temp){
     int l=0;
     while(temp!=NULL){
         l++;
         temp=temp->next;
     }
     return l;
 }
 
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int l=findLen(A);
        
        if(l==0)    return A;
        if(B%l==0) return A;
        
        ListNode* temp=A;
        for(int i=0;i<l-B%l-1;i++){
            temp=temp->next;
        }
        
        ListNode* new_head=temp->next;
        temp->next=NULL;
        
        ListNode *old_last=new_head;
        while(old_last->next) old_last=old_last->next;
        
        old_last->next=A;
        
        
        return new_head;
}
