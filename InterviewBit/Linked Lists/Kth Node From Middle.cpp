/*
Problem Description

Given a linked list A of length N and an integer B.
You need to find the value of the Bth node from the middle towards the beginning of the Linked List A.
If no such element exists, then return -1.

NOTE:
Position of middle node is: (N/2)+1, where N is the total number of nodes in the list.

Problem Constraints
1 <= N <= 105
1<= Value in Each Link List Node <= 103
1 <= B <= 105

Input Format
First argument is the head pointer of the linkedlist A.
Second argument is an integer B.

Output Format
Return an integer denoting the value of the Bth from the middle towards the head of the linked list A. If no such element exists, then return -1.

https://www.interviewbit.com/problems/kth-node-from-middle/
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

int Solution::solve(ListNode* A, int B) {
    int length=findLength(A);
        
    ListNode* t1=A;

    if (B>length/2) return -1;
	else
    {
		int limit=length/2 - B;
		while(limit--)  t1=t1->next;
	}
            
    return t1->val; 
}
