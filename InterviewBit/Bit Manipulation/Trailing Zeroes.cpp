/*
Problem Description

Given an integer A, count and return the number of trailing zeroes.

Problem Constraints
1 <= A <= 109

https://www.interviewbit.com/problems/trailing-zeroes/
*/

int Solution::solve(int A) {
    int count=0;
	while((A&1)==0)   { 
        count++;	
        A = A>> 1; 
    }
	return count;
}

