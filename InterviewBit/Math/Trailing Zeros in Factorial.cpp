/*
Problem Description

Given an integer A, return the number of trailing zeroes in A!.
Note: Your solution should be in logarithmic time complexity.

**Problem Constraints**
1 <= A <= 10000

https://www.interviewbit.com/problems/trailing-zeros-in-factorial/
*/


int Solution::trailingZeroes(int A) {
    if(A<0)	return -1;

    int count = 0;
 
    for (int i = 5; A / i >= 1; i *= 5)
        count += A / i;
 
    return count;
}
