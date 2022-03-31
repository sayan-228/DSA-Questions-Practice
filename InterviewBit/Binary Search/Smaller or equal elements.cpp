/*
Problem Description

Given an sorted array A of size N. Find number of elements which are less than or equal to B.

NOTE: Expected Time Complexity O(log N)

Problem Constraints
1 <= N <= 106
1 <= A[i], B <= 109

https://www.interviewbit.com/problems/smaller-or-equal-elements/
*/

int Solution::solve(vector<int> &A, int B) {
    return upper_bound(A.begin(),A.end(),B)-A.begin();
}
