/*
Problem Description

Implement strStr().
strstr - locate a substring ( needle ) in a string ( haystack ).

Try not to use standard library string functions for this question.
Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

NOTE: String A is haystack, B is needle.

https://www.interviewbit.com/problems/implement-strstr/
*/

int Solution::strStr(const string A, const string B) {
    int n=A.size();
        int m=B.size();
        
        int result=-1;
        int flag=0;
        if(m==0)    return 0;
        
        
        for(int i=0;i<n;i++){
            int j=0;
            int k=i;
            if(A[k]==B[j]){
                while(A[k]==B[j] and k<n and j<m){
                    j++;
                    k++;
                    if(j==m)    {flag=1;result=i;break;}
                }
            }
        
            if(flag==1)    break;
        }
        
        return result;
}
