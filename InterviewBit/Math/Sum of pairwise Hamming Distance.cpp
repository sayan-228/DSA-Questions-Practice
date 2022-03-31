/*
Problem Description

Hamming distance between two non-negative integers is defined as the number of positions at which the corresponding bits are different.
Given an array A of N non-negative integers, find the sum of hamming distances of all pairs of integers in the array. Return the answer modulo 1000000007.

Problem Constraints
1 <= |A| <= 200000
1 <= A[i] <= 109

https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/
*/


int Solution::hammingDistance(const vector<int> &A) {
    int n=A.size();
        long long int sum=0;
        long long int count=0;
        for (int i = 0; i < 32; i++) {
            // count number of elements with i'th bit set
            count = 0;
            for (int j = 0; j < n; j++){
                if (A[j] & (1 << i))    count++;
        }
        sum = (sum + count * (n - count) * 2)%1000000007;
    }
 
    return sum;
}
