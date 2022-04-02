/*
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes: Expected solution is linear in time and constant in space.

For example,
List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.

https://www.interviewbit.com/problems/palindrome-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Stack Approach
int findLength(ListNode *temp){
     int l=0;
     while(temp!=NULL){
         l++;
         temp=temp->next;
     }
     return l;
}

int Solution::lPalin(ListNode* A) {
    ListNode* t1=A; 
        stack<int> stack1;
        int length=findLength(A);
        
        if(length==0)  return 0;
        if(length==1)    return 1;
        
        for(int i=0;i<length/2;i++){
            stack1.push(t1->val);
            t1=t1->next;
        }
        
        if(length%2!=0) t1=t1->next;
        
        while(t1){
            if(stack1.top()== t1->val)  stack1.pop();
            else return 0; 
            t1=t1->next;
        }
        
        return 1;
}
