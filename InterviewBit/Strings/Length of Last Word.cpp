/*
Problem Description

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:
Given s = "Hello World",
return 5 as length("World") = 5.

https://www.interviewbit.com/problems/length-of-last-word/
*/

int Solution::lengthOfLastWord(const string A) {
    int n=A.size();
        int count=0;
        int i=n-1;
        int flag=0;
        while(i>=0){
            if(A[i]!=' ')   {flag=1;break;}
            else flag=0;
            i--;
        }
        
        if(flag==1){
            while(i>=0 and A[i]!=' '){
                count++;
                i--;
            }
        }
        
        return count;
}
