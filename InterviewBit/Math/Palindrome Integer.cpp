/*
Problem Description

Determine whether an integer is a palindrome. Do this without extra space.
A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed. Negative numbers are not palindromic.

Example :
Input : 12121
Output : 1

Input : 123
Output : 0

https://www.interviewbit.com/problems/palindrome-integer/
*/

int Solution::isPalindrome(int A) {
    vector<int> result;
    if (A>=0){
        if (A==1 or A==0) return 1;
        
        int rem=0,num=A;
        while(num>0){
            rem=num%10;
            num/=10;
            result.push_back(rem);
        }
        int n=result.size();
        int i,j;
        for(i=0, j=n-1;i<=j;i++,j-- ){
            if (result[i]==result[j]){
                continue;
            }
            else {
                return 0;
            }
        }
        if (i==j or i>j){
            return 1;
        }
        
    }
    else return 0;
}
