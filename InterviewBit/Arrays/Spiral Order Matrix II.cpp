/*
Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.

Input Format:
The first and the only argument contains an integer, A.

Output Format:
Return a 2-d matrix of size A x A satisfying the spiral order.

Constraints:
1 <= A <= 1000

Examples:
Input 1:
A = 3
Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]

https://www.interviewbit.com/problems/spiral-order-matrix-ii/
*/

vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> result( A , vector<int> (A, 0));
        int count=0;
        int i=0, j=0;
        while(count<(A*A)){
            while (j<A and result[i][j]==0){
                count+=1;
                result[i][j]=count; 
                j++;    
            }
            j--;
            i++;
            while (i<A and result[i][j]==0){
                count+=1;
                result[i][j]=count;
                i++;
            }
            i--;
            j--;
            while (j>=0 and result[i][j]==0){
                count+=1;
                result[i][j]=count;
                j--;
            }
            j++;
            i--;
            while (i>=0 and result[i][j]==0){
                count+=1;
                result[i][j]=count;
                i--;
            }
            j++;
            i++;    
        }

        return result;
}
