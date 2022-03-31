/*
Problem Description

Given a number A in a form of string.
You have to find the smallest number that has same set of digits as A and is greater than A.
If A is the greatest possible number with its set of digits, then return -1.

Problem Constraints
 1 <= A <= 10100000
 A doesn't contain leading zeroes.

https://www.interviewbit.com/problems/next-similar-number/
*/

string Solution::solve(string A) {
        string rev=A;
        
        sort(rev.rbegin(),rev.rend());
        if(rev==A)  return "-1";
        
        //As we have to find next greater element, we should always start from right side
        int i,j;
        for(i=A.size()-1;i>=1;i--){
            if(A[i]>A[i-1]){
                j=i-1;
                break;
            }
        }
        
        int next=i,k;
        
        for(k=i+1;k<A.size();k++){
            if(A[k]>A[j] && A[k]<A[next])  next=k; 
        }
        swap(A[next],A[j]);
        sort(A.begin()+i,A.end());

        return A;
}
