/*
Problem Description

Given an integer A.
Compute and return the square root of A.
If A is not a perfect square, return floor(sqrt(A)).

DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY.

NOTE: Do not use sort function from standard library. Users are expected to solve this in O(log(A)) time.

https://www.interviewbit.com/problems/square-root-of-integer/
*/


int findroot(long long int l, long long int r, int A){
    if (r >= l) {
		long long int mid = l + (r - l) / 2;

		if (mid*mid <= A and (mid+1)*(mid+1)>A) return mid;

		if (mid*mid < A)
            return findroot(mid + 1, r, A);
		return findroot(l, mid - 1, A);
		
	}

	return -1;
}

int Solution::sqrt(int A) {
    long long int l=1;
        long long int r=A;
        
        if(A==0)    return 0;
        if(A==1 or A==2 or A==3)    return 1;
        
        return findroot(l,r,A);
}
