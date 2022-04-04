/*
Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example:

Given the following matrix:
[
    [ 1, 2, 3 ],
    [ 4, 5, 6 ],
    [ 7, 8, 9 ]
]
You should return
[1, 2, 3, 6, 9, 8, 7, 4, 5]

https://www.interviewbit.com/problems/spiral-order-matrix-i/
*/

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {

    vector<int> ans;
 
    if (A.size() == 0)
        return ans;

    int i, k = 0, l = 0;
    int m = A.size(), n = A[0].size();
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n) {

	/* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) {
            ans.push_back(A[k][i]);
        }
        k++;

        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i) {
            ans.push_back(A[i][n - 1]);
        }
        n--;

        /* Print the last row from the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                ans.push_back(A[m - 1][i]);
            }
            m--;
        }

        /* Print the first column from the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                ans.push_back(A[i][l]);
            }
            l++;
        }
    }      

    return ans;           
}
