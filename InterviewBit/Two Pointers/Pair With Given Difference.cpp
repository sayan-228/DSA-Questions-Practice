/*
Problem Description

Given an one-dimensional unsorted array A containing N integers.
You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.
Return 1 if any such pair exists else return 0.

Problem Constraints
1 <= N <= 105
-103 <= A[i] <= 103
-105 <= B <= 105

https://www.interviewbit.com/problems/pair-with-given-difference/
*/

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
	if(n==0)	return 0;

	sort(A.begin(), A.end());
	
	int i=0,j=0;
	while(i<n and j<n){
		if(A[j]-A[i]==B and i!=j)	return 1;
		else{
			if(A[j]-A[i]<B)	j++;
			else	i++;
		}
	}

	return 0;
}
