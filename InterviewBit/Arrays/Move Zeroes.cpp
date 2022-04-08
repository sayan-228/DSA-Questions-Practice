/*
Problem Description

Given an integer array A, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Problem Constraints
1 <= |A| <= 10^5

https://www.interviewbit.com/problems/move-zeroes/
*/

vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
	int count=0;
    int i=0;
	while(i<n){
		if(A[i]!=0)	{
            A[count]=A[i];
			count++;
		}
		i++;
	}

    while(count<n)  A[count++]=0;

	return A;

}