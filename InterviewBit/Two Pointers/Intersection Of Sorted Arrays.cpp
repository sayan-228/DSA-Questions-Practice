/*
Problem Description

Find the intersection of two sorted arrays. OR in other words, Given 2 sorted arrays, find all the elements which occur in both the arrays.

Example:
Input:
A: [1 2 3 3 4 5 6]
B: [3 3 5]

Output: [3 3 5]

https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
*/


vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

        vector<int> result;
        
        int i=0,j=0;
        
        while(i<A.size() and j<B.size()){
            if(A[i]==B[j]) {
                    result.push_back(A[i]);
                    i++;
                    j++;
            }
            else if(A[i]<B[j]) i++;
            else j++;            
            }
        
        
        return result;
}
