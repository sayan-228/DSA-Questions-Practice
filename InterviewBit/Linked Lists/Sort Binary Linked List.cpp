/*
Problem Description

Given a Linked List A consisting of N nodes.
The Linked List is binary i.e data values in the linked list nodes consist of only 0's and 1's.
You need to sort the linked list and return the new linked list.

NOTE: Try to do it in constant space.

Problem Constraints
 1 <= N <= 105
 A.val = 0 or A.val = 1

Input Format
First and only argument is the head pointer of the linkedlist A.

Output Format
Return the head pointer of the new sorted linked list.

https://www.interviewbit.com/problems/sort-binary-linked-list/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //Basic idea of sorting: Count the number of 0's and 1's 
//Then overwrite the values on the linked list according to count

//Given Method: Bring all the zeros to the head of the list. 1's will be automatically sorted.

ListNode* Solution::solve(ListNode* A) {
    ListNode* t1=A;
    while(t1->next)
    {
        if(t1->next->val==0)
        {
            ListNode* temp=t1->next;
		    t1->next=temp->next;
            temp->next=A;
            A=temp;
            if(t1->next and t1->next->val==1) t1=t1->next;
        }
	    else t1=t1->next;
    }

    return A;
}
