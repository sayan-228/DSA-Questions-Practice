/*
Given two sorted integer arrays A and B, merge B into A as one sorted array.

Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.

If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/
*/
void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int m=A.size();
	int n=B.size();
	int i=m-1, j=n-1;

	A.resize(m+n);

	while(i>=0 and j>=0){
		if(A[i]<B[j])	{A[i+j+1]=B[j];	j--;}
	 	else {A[i+j+1]=A[i];	i--;}
	}

	while(j>=0)	{	A[j]=B[j];	j--;}

    return;

}