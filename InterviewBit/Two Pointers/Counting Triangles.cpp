/*
You are given an array of N non-negative integers, A0, A1 ,…, AN-1.
Considering each array element Ai as the edge length of some line segment, count the number of triangles which you can form using these array values.

Notes:
You can use any value only once while forming each triangle. Order of choosing the edge lengths doesn’t matter. Any triangle formed should have a positive area.
Return answer modulo 109 + 7.

For example,
A = [1, 1, 1, 2, 2]
Return: 4

https://www.interviewbit.com/problems/counting-triangles/
*/
#define mod 1000000007

int Solution::nTriang(vector<int> &A) {
    int n=A.size();
	if(n<3) return 0;
        sort(A.begin(),A.end());
        int i,j,k,count=0;

	for(k=n-1;k>=2;k--){
            i=0;
            j=k-1;
		while(i<j){
		long long int min_sum=A[i]+A[j], max_k=A[k];
                if (min_sum > max_k) {
                    count= (count + (j-i)%mod)%mod;
                    j--;
                }
                else i++;
            }
	}

	return count%mod;
}

