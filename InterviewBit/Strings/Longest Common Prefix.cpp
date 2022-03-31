/*
Problem Description

Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.
Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

For Example: longest common prefix of "abcdefgh" and "abcefgh" is "abc".

https://www.interviewbit.com/problems/longest-common-prefix/
*/

string Solution::longestCommonPrefix(vector<string> &A) {
    string result="";
        int min=1000000;
        for (int i=0; i<A.size();i++){
            if(A[i].size()<min)    min=A[i].size();
        }
        
        int j,i;
        for(j=0;j<min;j++){
            for(i=1; i<A.size();i++){
                if (A[i][j]==A[i-1][j]) continue;
                else break;
            }
            if(i==A.size())  result+= A[0][j];
            else break;
        }
        
        return result;
}
