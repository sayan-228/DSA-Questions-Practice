/*
Problem Description

Given a sorted array A consisting of duplicate elements.
Your task is to remove all the duplicates and return a sorted array of distinct elements consisting of all distinct elements present in A.

But, instead of returning an answer array, you have to rearrange the given array in-place such that it resembles what has been described above.
Hence, return a single integer, the index(1-based) till which the answer array would reside in the given array A.

Example Input
Input 1:
A = [1, 1, 2]
Input 2:
A = [1, 2, 2, 3, 3]

Example Output
Output 1:
2
Output 2:
3

https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
*/

int Solution::removeDuplicates(vector<int> &A) {

    int n=A.size();
        
        int i=1,j=0;
        
        if (n==0)   return 0;
        if (n==1)    return 1;
        while(i<=n-1){
            if(A[i]==A[j])    i++;
            else{
                j++;
                A[j]=A[i];
                i++;
            }
        }
        return j+1;
}
