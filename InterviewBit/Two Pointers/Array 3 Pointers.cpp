/*
You are given 3 arrays A, B and C. All 3 of the arrays are sorted.

Find i, j, k such that :
max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])) is minimized.
Return the minimum max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i]))

**abs(x) is absolute value of x and is implemented in the following manner : **
if (x < 0) return -x;
else return x;

Example :
Input : 
        A : [1, 4, 10]
        B : [2, 15, 20]
        C : [10, 12]
Output : 5 
        With 10 from A, 15 from B and 10 from C.

https://www.interviewbit.com/problems/array-3-pointers/
*/

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
	int all_min=1000000000;
	while(i<A.size() and j<B.size() and k<C.size()){
		int temp=max(abs(A[i]-B[j]),abs(B[j]-C[k]));
        int max1=max(temp,abs(A[i]-C[k]));
		all_min=min(all_min,max1);	
		if (A[i]<=B[j] and A[i]<=C[k])	i++;
		else if (B[j]<=A[i] and B[j]<=C[k])	j++;
		else	k++;
	}

	return all_min;
}