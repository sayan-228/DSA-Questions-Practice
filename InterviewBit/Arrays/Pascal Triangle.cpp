/*
Problem Description

Given numRows, generate the first numRows of Pascal's triangle.
Pascal's triangle : To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:
Given numRows = 5,
Return,
[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]

Constraints:
0 <= numRows <= 25

https://www.interviewbit.com/problems/pascal-triangle/
*/

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> vec(A);
        
        for(int i = 0; i < A; i++)
        { 
            int col = i+1;
            vec[i] = vector<int>(i+1);
            for(int j = 0, k=col-1; j <=k; j++,k--)
            {
                if(A==1){
                    vec[i][j] = 1;
                    return vec;
                }
                else{
                    if (j==0 and k==col-1){
                        vec[i][j]=1;
                        vec[i][k]=1;
                    }
                    else{
                        vec[i][j]=vec[i-1][j-1]+vec[i-1][j];
                        vec[i][k]=vec[i][j];
                    }
                }
                
            }   
        }
        return vec;
}
