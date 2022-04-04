/*
You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).
You need to do this in place.

Example:
If the array is
[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:
[
    [3, 1],
    [4, 2]
]

https://www.interviewbit.com/problems/rotate-matrix/
*/

void Solution::rotate(vector<vector<int> > &A) {
    
    int N=A.size();
    
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            // Swap elements of each cycle in clockwise direction
            int temp = A[i][j];
            A[i][j] = A[N - 1 - j][i];
            A[N - 1 - j][i] = A[N - 1 - i][N - 1 - j];
            A[N - 1 - i][N - 1 - j] = A[j][N - 1 - i];
            A[j][N - 1 - i] = temp;
        }
    }

    return;  
}
