/*
Given an array of integers A of size N and an integer B.
array A is rotated at some pivot unknown to you beforehand.
(i.e., 0 1 2 4 5 6 7  might become 4 5 6 7 0 1 2 ).

You are given a target value B to search. If found in the array, return its index, otherwise return -1.
You may assume no duplicate exists in the array.

NOTE:- Array A was sorted in non-decreasing order before rotation.

https://www.interviewbit.com/problems/rotated-sorted-array-search/
*/

int binarySearch(const vector<int> &A, int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (A[mid] == x)
			return mid;

		if (A[mid] > x)
			return binarySearch(A, l, mid - 1, x);
		return binarySearch(A, mid + 1, r, x);
	}
	return -1;
}

int binarySearch_break(const vector<int> &A, int l, int r)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (A[mid] - A[mid-1] < 0)
			return mid;
        else
			return max(binarySearch_break(A, mid + 1, r) , binarySearch_break(A, l, mid - 1));
		
	}
	return -1;
}


int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
        int l=0,r=n-1;
        
        if(n==0)    return -1;
        if(n==1)    return ((A[0]==B)?0:-1);
        
        if(A[0]<A[n-1]){
            return binarySearch(A,l,r,B);
        }
        else{
            int first=A[0];
            l=1;
            int break_index=binarySearch_break(A,l,r);
            l=0;
            if (B>=first){
                return binarySearch(A,l,break_index-1,B);
            }
            else{
                return binarySearch(A,break_index,r,B);
            }
        }
     
}
