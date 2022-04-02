/*
Sort a linked list using insertion sort.

Example :
Input : 1 -> 3 -> 2
Return 1 -> 2 -> 3

https://www.interviewbit.com/problems/insertion-sort-list/
*/


/**
 * Definition for singly-linked list.
 * struct listnode {
 *     int val;
 *     struct listnode *next;
 * };
 * 
 * typedef struct listnode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
 listnode* sorted;
    
    void sortedInsert(listnode* newnode)
    {
        /* Special case for the head end */
        if (sorted == NULL || (sorted->val >= newnode->val)) {
            newnode->next = sorted;
            sorted = newnode;
        }
        else {
            listnode* current = sorted;
            // Locate the node before the point of insertion
            
            while (current->next != NULL && current->next->val < newnode->val) {
                current = current->next;
            }
            newnode->next = current->next;
            current->next = newnode;
        }
    }

listnode* insertionSortList(listnode* A) {
        sorted=NULL;
        
        listnode* t1=A;
        
        while(t1){
            
            listnode* t1_next=t1->next;
            sortedInsert(t1);
            t1=t1_next;
        }
        A = sorted;
        
        return A;
}
