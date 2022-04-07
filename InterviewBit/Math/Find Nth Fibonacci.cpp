/*
Problem Description

Given an integer A you need to find the Ath fibonacci number modulo 109 + 7.
The first fibonacci number F1 = 1
The first fibonacci number F2 = 1
The nth fibonacci number Fn = Fn-1 + Fn-2 (n > 2)

Problem Constraints
1 <= A <= 10^9.

Input Format
First argument is an integer A.

Output Format
Return a single integer denoting Ath fibonacci number modulo 10^9 + 7.

https://www.interviewbit.com/problems/find-nth-fibonacci/
*/

long long int lookup_table[100];

long long int fib_mem(long long int n) {
    if(lookup_table[n] == 0) {
        if(n <= 1)
            lookup_table[n] = n;
        else
            lookup_table[n] = fib_mem(n-1) + fib_mem(n-2);
    }
    return lookup_table[n];
}

int Solution::solve(int A) {
    for(long long int i = 0; i < 100; i++) {
        lookup_table[i] == 0;
    }
    return fib_mem(A);
}
