// Problem Description

// Given an integer array A of size N.
// You can pick B elements from either left or right end of the array A to get maximum sum.
// Find and return this maximum possible sum.

// NOTE: Suppose B = 4 and array A contains 10 elements then
// You can pick first four elements or can pick last four elements or can pick 1 from front and 3 from back etc . you need to return the maximum possible sum of elements you can pick.

// Problem Constraints:
// 1 <= N <= 105
// 1 <= B <= N
// -103 <= A[i] <= 103


int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
	long long int result=0;
	
	for(int i = 0; i < B; i++)  result += A[i];

    long long int sum = result;

    for(int i = 0; i < B; i++)
    {
        sum -= A[B - 1 - i];
        sum += A[n - 1- i];
    
        result = max(result, sum);
    }

	return result;
}
