/*
Problem Description

Given a linked list A of length N and an integer B.
You need to reverse every alternate B nodes in the linked list A.

Problem Constraints
1 <= N <= 105
1<= Value in Each Link List Node <= 103
1 <= B <= N
N is divisible by B

Input Format
First argument is the head pointer of the linkedlist A.
Second argument is an integer B.

Output Format
Return the head pointer of the final linkedlist as described.

https://www.interviewbit.com/problems/reverse-alternate-k-nodes/
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* _kAltReverse(ListNode *Node, int k, bool b)
{
    if(Node == NULL)
        return NULL;
     
    int count = 1;
    ListNode *prev = NULL;
    ListNode *current = Node;
    ListNode *next;
     
    while(current != NULL && count <= k)
    {
        next = current->next;
     
        /* Reverse the nodes only if b is true*/
        if(b == true)
            current->next = prev;
                 
        prev = current;
        current = next;
        count++;
    }
         
    if(b == true)
    {
        Node->next = _kAltReverse(current, k, !b);
        return prev;        
    }
         
    else
    {
        prev->next = _kAltReverse(current, k, !b);
        return Node;    
    }
}

ListNode* Solution::solve(ListNode* A, int B) {
    return _kAltReverse(A, B, true);
}
