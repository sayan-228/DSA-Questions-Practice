/*
Problem Description

Given an array of integers A, every element appears twice except for one. Find that single one.

Problem Constraints
2 <= |A| <= 2000000
0 <= A[i] <= INTMAX

Example Input
Input 1:
 A = [1, 2, 2, 3, 1]
Input 2:
 A = [1, 2, 2]
 
Example Output
Output 1:
 3
Output 2:
 1
 
https://www.interviewbit.com/problems/single-number/
*/

int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
        int output=0;
        
        for (int i=0; i<n;i++){
            output ^= A[i];
        }
        
        return output;
}
