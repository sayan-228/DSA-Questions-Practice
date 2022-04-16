/*
Given a sorted array, remove the duplicates in place such that each element can appear atmost twice and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.

Note that even though we want you to return the new length, make sure to change the original array as well in place

For example,
Given input array A = [1,1,1,2],
Your function should return length = 3, and A is now [1,1,2].

https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/
*/

int Solution::removeDuplicates(vector<int> &A) {

    int n=A.size();
        
        int i=1,j=0;
        int count=1;
        
        if (n==0)   return 0;
        if (n==1)   return 1;
        if (n==2)   return 2;
        while(i<=n-1){
            if (A[i]==A[j] and count==2){
                i++;
            }         
            else if(A[i]==A[j] and count==1){
                ++j;
                A[j]=A[i];
                i++;
                count++;
            }
            else if (A[i]!=A[j]){
                ++j;
                A[j]=A[i];
                i++;
                count=1;
            }
        }

        return j+1;
}
