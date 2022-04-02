/*
Given a linked list, remove the nth node from the end of list and return its head.

For example,
Given linked list: 1->2->3->4->5, and n = 2.
After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
If n is greater than the size of the list, remove the first node of the list.
Try doing it using constant additional space.

https://www.interviewbit.com/problems/remove-nth-node-from-list-end/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int findLength(ListNode *temp){
     int l=0;
     while(temp!=NULL){
         l++;
         temp=temp->next;
     }
     return l;
    }

ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {

    int length=findLength(A);
        
        ListNode* t1=A;
        
        if(length==1 and B==1)  return NULL;
        
        if((length-B) <=0){
                A=t1->next;
                return A;
        }
        
        for (int i = 0; i < length - B - 1; i++) t1 = t1 -> next;
        t1->next=t1->next->next;
        
        return A;

}
