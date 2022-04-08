/*
Problem Description

Given an index k, return the kth row of the Pascal's triangle.
Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:
Input : k = 3
Return : [1,3,3,1]

Note: k is 0 based. k = 0, corresponds to the row [1]. 

https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/
*/

int getValue(int A, int j){
    int sum=0;
    if((A==0 and A>=j) or (A==j) or (j==0)) {
        return 1;
    }
    else if (A<j){
        return 0;
    }
    else{
    return getValue(A-1,j-1)+getValue(A-1,j);
    }
}

vector<int> Solution::getRow(int A) {
    vector<int> vec(A+1);
    if(A==0){
        vec[0] = 1;
        return vec;
    }
    else{
    for(int j = 0, k=A; j <=k; j++,k--){
        if (j==0 and k==A){
            vec[j]=1;
            vec[k]=1;
        }
        else{
                vec[j]=getValue(A,j);
                vec[k]=vec[j];
            }
        }
    }
    return vec;
}
            

