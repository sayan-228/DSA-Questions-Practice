/*
Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:
The first and the only argument contains an integer array, A.

Output Format:
Return an integer representing the maximum possible sum of the contiguous subarray.

Constraints:
1 <= N <= 1e6
-1000 <= A[i] <= 1000

https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
*/


int Solution::maxSubArray(const vector<int> &A) {
    int max_current=A[0];
    int max_global=A[0];
    int i, sum=0;
    for(i=1;i<A.size();i++){
        sum=max_current+A[i];
        if (sum>=A[i])
            max_current=sum;
        else
            max_current=A[i];

        if (max_current>max_global)
            max_global=max_current;
    }
    return max_global;   
}

