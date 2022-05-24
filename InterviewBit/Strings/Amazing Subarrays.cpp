/*
You are given a string S, and you have to find all the amazing substrings of S.
Amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).

Constraints
1 <= length(S) <= 1e6
S can have special characters

Example
Input
ABEC

Output
6

https://www.interviewbit.com/problems/amazing-subarrays/
*/

int Solution::solve(string A) {
    int count=0;
	for (int i = 0; i < A.size(); i++) {
        	if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U' ){
        		count= (count+(A.size()-i)) % 10003;
		}
    }
	return count;
}

