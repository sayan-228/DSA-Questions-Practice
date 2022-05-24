/*
Problem Description
 
There is a corridor in a Jail which is N units long. Given an array A of size N. The ith index of this array is 0 if the light at ith position is faulty otherwise it is 1.
All the lights are of specific power B which if is placed at position X, it can light the corridor from [ X-B+1, X+B-1].
Initially all lights are off.
Return the minimum number of lights to be turned ON to light the whole corridor or -1 if the whole corridor cannot be lighted.

Problem Constraints
1 <= N <= 100000
1 <= B <= 10000

Example Input
Input 1:
A = [ 0, 0, 1, 1, 1, 0, 0, 1].
B = 3
Input 2:
A = [ 0, 0, 0, 1, 0].
B = 3

Example Output
Output 1:
2
Output 2:
-1

https://www.interviewbit.com/problems/minimum-lights-to-activate/
*/

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
	int i=0,ans=0;
	if(B==0)	return -1;

	while(i<n){
		int index = -1;

		for(int j= max(0,i-B+1); j<= min(n-1,i+B-1); j++){
			if(A[j]==1)	index=j;
		}
    
		if(index==-1)	return -1;

		ans++;
		i=index+B;
	}
	return ans;
}
