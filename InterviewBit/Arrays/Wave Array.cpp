/*
Given an array of integers,  sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that  a1 >= a2 <= a3 >= a4 <= a5.....

Example
Given [1, 2, 3, 4]

One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]

https://www.interviewbit.com/problems/wave-array/
*/

vector<int> Solution::wave(vector<int> &A) {
    int n=A.size();

    vector<int> result(n);
    sort(A.begin(),A.end());

    if(n%2==0){
        for(int i=0;i<n;i++){
	        if(i%2==0)	result[i+1]=A[i];
	        else	result[i-1]=A[i];
        }
    }
    else{
        result[n-1]=A[n-1];
        for(int i=0;i<n-1;i++){
	        if(i%2==0)	result[i+1]=A[i];
	        else	result[i-1]=A[i];
        }
    }

    return result;
}
