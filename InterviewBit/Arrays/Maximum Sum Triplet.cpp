/*
Problem Description

Given an array A containing N integers.
You need to find the maximum sum of triplet ( Ai + Aj + Ak ) such that 0 <= i < j < k < N and Ai < Aj < Ak.
If no such triplet exist return 0.

Problem Constraints
3 <= N <= 105.
1 <= A[i] <= 108.

https://www.interviewbit.com/problems/maximum-sum-triplet/
*/

int Solution::solve(vector<int> &A) {
    int n=A.size();
    long long int max=1;
    long long int sum=0;
    if (n==3){
        if (A[0]<A[1] and A[1]<A[2]) return (A[0]+A[1]+A[2]);
        else return 0;
    }
    else{
        int i,j,k;
        for (i=0;i<n-2;i++){
            for (j=i+1;j<n-1;j++){
                if(A[i]<A[j]){
                    for (k=j+1;k<n;k++){
                        if(A[j]<A[k]){
                                sum=A[i]+A[j]+A[k];
                                if (sum>max) max=sum;
                        }
                        else continue;
                    }
                }
                else continue;
            }   
        }  
    }
    return max;
}
