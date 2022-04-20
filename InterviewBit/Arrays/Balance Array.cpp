/*
Problem Description

Given an integer array A of size N. You need to count the number of special elements in the given array.
A element is special if removal of that element make the array balanced.
Array will be balanced if sum of even index element equal to sum of odd index element.

Problem Constraints
1 <= N <= 10^5
1 <= A[i] <= 10^9

Example Input
Input 1:
A = [2, 1, 6, 4]
Input 2:
A = [5, 5, 2, 5, 8]

Example Output
Output 1:
 1
Output 2:
 2

https://www.interviewbit.com/problems/balance-array/
*/

int Solution::solve(vector<int> &A) {
    long long int even=0, odd=0, new_even=0, new_odd=0, l_odd=0,l_even=0;
    long long int count=0;

    for(int i=0; i<A.size();i++){
        if(i&1) odd+=A[i];
        else even+=A[i];
    }

    for(int i=0; i<A.size();i++){
        if(i&1){
            new_odd=even-l_even+l_odd;
            new_even=odd-A[i]+l_even-l_odd;
            l_odd+=A[i];

        }
        else{
            new_even=odd-l_odd+l_even;
            new_odd=even-A[i]+l_odd-l_even;
            l_even+=A[i];
        }

        if(new_even==new_odd)   count++;
    }

    return count;
}
