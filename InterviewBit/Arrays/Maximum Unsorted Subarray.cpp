/*
Problem Description
 
Given an array A of non-negative integers of size N. Find the minimum sub-array Al, Al+1 ,..., Ar such that if we sort(in ascending order) that sub-array, then the whole array should get sorted.
If A is already sorted, output -1.

Problem Constraints
1 <= N <= 1000000
1 <= A[i] <= 1000000

Input Format
First and only argument is an array of non-negative integers of size N.

Output Format
Return an array of length two where the first element denotes the starting index(0-based) and the second element denotes the ending index(0-based) of the sub-array. If the array is already sorted, return an array containing only one element i.e. -1.

https://www.interviewbit.com/problems/maximum-unsorted-subarray/
*/

vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    vector<int>res;
    int s=-1,e=-1;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            s=i;
            break;
        }
    }
    if(s==-1){
        res.push_back(-1);
        return res;
    }
    for(int i=n-1;i>0;i--){
        if(A[i]<A[i-1]){
            e=i;
            break;
        }
    }

    int minm=A[s],maxm=A[s];
    for(int i=s+1;i<=e;i++){
        if(A[i]<minm)
         minm=A[i];
        else if(A[i]>maxm)
         maxm=A[i];
    }
    for(int i=0;i<s;i++){
        if(A[i]>minm){
         s=i;
         break;
        }
    }
    for(int i=n-1;i>e;i--){
        if(A[i]<maxm){
         e=i;
         break;
        }
    }
    res.push_back(s);
    res.push_back(e);
    return res;
}
