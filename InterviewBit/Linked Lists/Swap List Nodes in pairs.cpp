/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::swapPairs(ListNode* A) {
    int temp;
        if(A==NULL or A->next==NULL)  return A;
        
        ListNode* t1=A;
        ListNode* t2=A->next;
        
        while(t2){
            temp=t1->val;
            t1->val=t2->val;
            t2->val=temp;
            t1=t2->next;
            t2=(t1?t1->next:NULL);
        }
        
        return A;
}
