/*
Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers for a given array A of size N.

If such arrangement is not possible, it must be rearranged as the lowest possible order i.e., sorted in an ascending order.

Constraints:
1 <= N <= 5e5
1 <= A[i] <= 1e9

Examples:
Input 1: A = [1, 2, 3]
Output 1: [1, 3, 2]

Input 2: A = [3, 2, 1]
Output 2: [1, 2, 3]

Input 3: A = [1, 1, 5]
Output 3: [1, 5, 1]

Input 4: A = [20, 50, 113]
Output 4: [20, 113, 50]

https://www.interviewbit.com/problems/next-permutation/
*/


vector<int> Solution::nextPermutation(vector<int> &A) {
        int n=A.size();
        if (n==1) return A;
        long long int i;
        
        for(i=n-2;i>=0;i--){
         if (A[i]<A[i+1]){
             sort(A.begin() + i+1, A.end());
             long long int j=i+1;
             long long int compare=A[i];
             while(compare>=A[j]){
                 j++;
             }
             swap(A[i],A[j]);
             return A;
        }
        else continue;
        }
        if(i==-1){
            sort(A.begin(), A.end());
        }
    return A;
}
