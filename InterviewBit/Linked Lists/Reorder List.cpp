/*
Given a singly linked list
L: L0 → L1 → … → Ln-1 → Ln,
reorder it to:
L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
You must do this in-place without altering the nodes values.

For example,
Given {1,2,3,4}, reorder it to {1,4,2,3}.

https://www.interviewbit.com/problems/reorder-list/
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

ListNode* Solution::reorderList(ListNode* A) {
    ListNode* t1=A;
        int length=findLength(A);
        
        if (length ==0 or length==1 or length==2)   return A;
        if(length%2!=0) length++;
        
        stack<int> s1;
        queue<int> q1;
        
        for(int i=1; i<=length/2;i++)  {
            q1.push(t1->val);
            t1=t1->next;
        }
        
        while(t1){
            s1.push(t1->val);
            t1=t1->next;
        }
        
        t1=A;
        //Again iterating the list from beginning and updating the values
        int i=0;
        while(t1){
            if(i%2==0){
                t1->val=q1.front();
                q1.pop();
            }
            else{
                t1->val=s1.top();
                s1.pop();
            }
            i++;
            t1=t1->next;
        }
        
        
        return A;
}
