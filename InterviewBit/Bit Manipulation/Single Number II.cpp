/*
Given an array of integers, every element appears thrice except for one which occurs once.
Find that element which does not appear thrice.

Note: Your algorithm should have a linear runtime complexity.
Could you implement it without using extra memory?

Input Format: First and only argument of input contains an integer array A
Output Format: return a single integer.

Constraints:
2 <= N <= 5 000 000  
0 <= A[i] <= INT_MAX

For Examples :
Example Input 1: A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Example Output 1: 4
Explanation: 4 occur exactly once

Example Input 2: A = [0, 0, 0, 1]
Example Output 2: 1

https://www.interviewbit.com/problems/single-number-ii/
*/


int Solution::singleNumber(const vector<int> &A) {
    int  ones = 0 ;
    int  twos = 0 ;
    int not_threes;
    int x ;

   for(int i=0; i< A.size(); i++ )
   {
   	    x =  A[i];
        twos |= ones & x ;
        ones ^= x ;
        not_threes = ~(ones & twos) ;
        ones &= not_threes ;
        twos &= not_threes ;
    }

	return ones;
}
