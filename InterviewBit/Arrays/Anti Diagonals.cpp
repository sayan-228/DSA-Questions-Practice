/*
Problem Description

Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.

Example:
Input:
1 2 3
4 5 6
7 8 9
Return the following:
[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]

https://www.interviewbit.com/problems/anti-diagonals/
*/
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    vector<vector<int> > result(2*n-1);

    
        int iter=0;
        int i,j;
        for(j=0;j<n;j++){
            int i=0,k=j;
            int count=j-i+1;
            while(count>0){
                result[iter].push_back(A[i][k]);
                count--;
                i++;
                k--;
            }
        iter++;
        }
        
        for(i=1;i<n;i++){
            int j=n-1,k=i;
            int count=j-i+1;
            while(count>0){
                result[iter].push_back(A[k][j]);
                count--;
                k++;
                j--;
            }
        iter++;
        }
    
    return result;
}
