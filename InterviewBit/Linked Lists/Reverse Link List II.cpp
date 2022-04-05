/*
Reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,
return 1->4->3->2->5->NULL.

Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list.

https://www.interviewbit.com/problems/reverse-link-list-ii/
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* temp=A;
        stack<int> s;
        int length=0;
        
        while(temp){
            length++;
            if(length>=B and length<=C)  s.push(temp->val);
            temp=temp->next;
        }
        
        temp=A;
        length=0;
        
        while(!s.empty()){
            length++;
            if(length>=B and length<=C)  {temp->val=s.top();  s.pop();}
            temp=temp->next;
        }
    
        
        return A;
}
