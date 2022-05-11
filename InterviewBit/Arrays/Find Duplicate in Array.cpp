
/*
Problem Description

Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.

Sample Input:
[3 4 1 4 1]

Sample Output:
1

If there are multiple possible answers ( like in the sample case above ), output any one.
If there is no duplicate, output -1

https://www.interviewbit.com/problems/find-duplicate-in-array/
*/

int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int> result(n);
        int max=0;
        for (int i=0; i<A.size(); i++){
            if (result[A[i]-1]==A[i]){
                return A[i];
            }
            else result[A[i]-1]=A[i];
        }
        return -1;
}
