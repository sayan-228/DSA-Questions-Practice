/*
Problem Description

A items are to be delivered in a circle of size B.
Find the position where the Ath item will be delivered if we start from a given position C.

NOTE: Items are distributed at adjacent positions starting from C.

Problem Constraints
1 <= A, B, C <= 10^8

https://www.interviewbit.com/problems/distribute-in-circle/
*/

int Solution::solve(int A, int B, int C) {
    return (C+A-1)%B;
}
