/*
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)

Output: 7 -> 0 -> 8
342 + 465 = 807
Make sure there are no trailing zeros in the output list

So, 7 -> 0 -> 8 -> 0 is not a valid response even though the value is still 807.

https://www.interviewbit.com/problems/add-two-numbers-as-lists/
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* t1=A;
        ListNode* t2=B;
        
        ListNode *res = new ListNode(0);
        ListNode *resPtr = res;
        
        int carry=0;
        
        while(t1!=NULL and t2!=NULL){
            ListNode *temp = new ListNode(0);
            int sum=t1->val+t2->val+carry;
            if(sum>9){
                temp->val= sum%10;
                carry=1;
                res->next=temp;
            }
            else {
                temp->val=sum;
                carry=0;
                res->next=temp;
            }
            t1=t1->next;
            t2=t2->next;
            res=res->next;
        }
        
        while(t1){
            int sum= t1->val+carry;
            if(sum>9){
                t1->val= sum%10;
                carry=1;
            }
            else {
                t1->val=sum;
                carry=0;
            } 
            res->next = t1;
            res=res->next;
            t1 = t1->next;
        }
        
        while(t2){
            int sum= t2->val+carry;
            if(sum>9){
                t2->val= sum%10;
                carry=1;
            }
            else {
                t2->val=sum;
                carry=0;
            }
            res->next = t2;
            res=res->next;
            t2 = t2->next;
        }
        
        if(carry==1){
            ListNode *temp = new ListNode(0);
            temp->val=1;
            res->next=temp;
        }
            
        return resPtr->next;
}
