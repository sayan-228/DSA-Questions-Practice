/*
Given a singly linked list and an integer K, reverses the nodes of the list K at a time and returns modified linked list.

NOTE : The length of the list is divisible by K

Example :
Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2,
You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5
Try to solve the problem using constant extra space.

https://www.interviewbit.com/problems/k-reverse-linked-list/
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

ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *res = new ListNode(0), *prev = res, *curr;
	ListNode *t1=A;
       	res -> next = A;
	
	int length=findLength(t1);
	int l_group=length%B;
    if(l_group>length) return A;
            
	int flag=0;
	curr=prev->next;

	while(t1){
		int count=0, check=l_group+1;
        ListNode* itr= t1;
		while(check){
			if(itr==NULL)	{flag=1; break;}
			itr=itr->next;
			check--;
		}
		if(flag==1)	break;
		
		while(count<B-1){
			ListNode* temp = prev -> next;
           		prev -> next = curr -> next;
           		curr -> next = curr -> next -> next;
           		prev -> next -> next = temp;
			count++;
		}
		prev=curr;
		curr=curr->next;
        t1=curr;
	}

	return res->next;
    
}
