/*
Problem Description

Given four positive integers A, B, C, D, determine if there’s a rectangle such that the lengths of its sides are A, B, C and D (in any order).
If any such rectangle exist return 1 else return 0.

Problem Constraints
1 <= A, B, C, D <= 100

https://www.interviewbit.com/problems/is-rectangle/
*/


int Solution::solve(int A, int B, int C, int D) {
    if ((A==B and C==D) or (B==C and A==D) or (A==C and B==D)){
        return 1;
    }
    else return 0;
}
