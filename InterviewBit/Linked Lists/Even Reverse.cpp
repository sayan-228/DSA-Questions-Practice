/*
Problem Description

Given a linked list A , reverse the order of all nodes at even positions.

Problem Constraints
1 <= Size of linked list <= 100000

Input Format
First and only argument is the head of the Linked-List A.

Output Format
Return the head of the new linked list.

https://www.interviewbit.com/problems/even-reverse/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::solve(ListNode* A) {
    stack<int> stack1;
    ListNode* iter;
    int i;

    for(i=0,iter=A;iter!=NULL;iter=iter->next,i++){
        if(i%2!=0){
            stack1.push(iter->val);
        }
    }
    for(i=0,iter=A;iter!=NULL;iter=iter->next,i++){
        if(i%2!=0){
            iter->val=stack1.top();
            stack1.pop();
        }
    }

return A;
}
