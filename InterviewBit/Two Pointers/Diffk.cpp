/*
Given an array ‘A’ of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.

Example:
Input :
A : [1 3 5] 
k : 4
Output : YES
as 5 - 1 = 4

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

https://www.interviewbit.com/problems/diffk/
*/

//This algorithm runs in O(NlogN). Implementing binary search for each element

int binarySearch(vector<int> &arr, int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int Solution::diffPossible(vector<int> &A, int B) {
    int n=A.size();
	sort(A.begin(), A.end());

	for (int i = 0; i < n-1; i++){
        	if (binarySearch(A, i+1, n-1, A[i] + B) != -1)
            		return 1;
 	}
    return 0;
}
