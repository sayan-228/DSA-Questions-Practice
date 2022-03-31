/*
Given a sorted array of integers A(0 based index) of size N, find the starting and ending position of a given integar B in array A.

Your algorithm’s runtime complexity must be in the order of O(log n).

Return an array of size 2, such that first element = starting position of B in A and second element = ending position of B in A, if B is not found in A return [-1, -1].

https://www.interviewbit.com/problems/search-for-a-range/
*/

int binarySearch_l(const vector<int> &A, int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (A[mid] == x and A[mid-1]<x )
			return mid;

		if (A[mid] >= x)
            return binarySearch_l(A, l, mid - 1, x);
        return binarySearch_l(A, mid + 1, r, x);
		
		
	}
	return -1;
}

int binarySearch_r(const vector<int> &A, int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (A[mid] == x and A[mid+1]>x)
			return mid;

		if (A[mid] <= x)
            return binarySearch_r(A, mid + 1, r, x);
		return binarySearch_r(A, l, mid - 1, x);
        
	}
	return -1;
}



vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();
        int l=0, r=n-1;
        vector<int> range(2);
        
        if(n==0){
            range[0]=-1;
            range[1]=-1;
        }
        else if(n==1){
            range[0]=(A[0]==B)?0:-1;
            range[1]=(A[0]==B)?0:-1;    
        }
        else{
            if(A[0]==B and A[n-1]==B){
                range[0]=0;
                range[1]=n-1;
            }
            else if (A[0]==B and A[n-1]!=B){
                range[0]=0;
                range[1]=binarySearch_r(A,l,r,B);
            }
            else if (A[0]!=B and A[n-1]==B){
                range[0]=binarySearch_l(A,l,r,B);
                range[1]=n-1;
            }
            else{
                range[0]=binarySearch_l(A,l,r,B);
                range[1]=binarySearch_r(A,l,r,B);
            }
            
        }
        
        
        return range;
}
