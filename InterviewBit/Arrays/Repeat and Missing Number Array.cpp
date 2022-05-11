/*
You are given a read only array of n integers from 1 to n.

Each integer appears exactly once except A which appears twice and B which is missing.
Return A and B.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Note that in your output A should precede B.

Example:
Input:[3 1 2 5 3] 
Output:[3, 4] 
A = 3, B = 4

https://www.interviewbit.com/problems/repeat-and-missing-number-array/
*/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
	vector<int> check(n);
	vector<int> res(2);
	int sum=0,total;

	if(n%2==0)	total=n/2 * (n+1);
	else	total=(n+1)/2 * n;

	for(int i=0; i<n; i++){
		sum+=A[i];
		if(check[A[i]-1]==A[i])	res[0]=A[i];
		else 	check[A[i]-1]=A[i];
	}

	res[1]= total + res[0] - sum;

	return res;
}
