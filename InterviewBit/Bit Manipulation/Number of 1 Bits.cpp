/*
Problem Description

Write a function that takes an integer and returns the number of 1 bits it has.

Problem Constraints
1 <= A <= 109

https://www.interviewbit.com/problems/number-of-1-bits/
*/

int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
        for (int i = 0; i < 32; i++) {
                if (A & (1 << i))    count++;
            } 
        return count;
}
