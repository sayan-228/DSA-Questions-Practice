/*
Problem Description

Given the position of a Bishop (A, B) on an 8 * 8 chessboard.
Your task is to count the total number of squares that can be visited by the Bishop in one move.
The position of the Bishop is denoted using row and column number of the chessboard.

Problem Constraints
1 <= A, B <= 8

https://www.interviewbit.com/problems/total-moves-for-bishop/
*/

int Solution::solve(int A, int B) {
    int north_west = min(A,B)-1;
	int north_east = min(A,9-B)-1;
	int south_west = 8 - max(A,9-B);
	int south_east = 8 - max(A,B);

	return north_west+north_east+south_west+south_east;
}
