/*
Problem Description

Given a numeric string A representing a large number you need to find the next smallest palindrome greater than this number.

Problem Constraints
1 <= |A| <= 100

A doesn't start with zeroes and always contain digits from 0-9.

Input Format
First and only argument is an string A.

Output Format
Return a numeric string denoting the next smallest palindrome greater than A.

Example Input
Input 1:
A = "23545"
Input 2:
A = "999"

Example Output
Output 1:
"23632"
Output 2:
"1001"

https://www.interviewbit.com/problems/next-smallest-palindrome/
*/

string makePalindrome(string input){
    int i=0; 
    int j=input.size()-1;
    while(i<j){
        input[j]=input[i];
        i++;
        j--;
    }
    return input;
}

string Solution::solve(string A) {
    int n=A.size();
    string temp=makePalindrome(A);
    if(temp.compare(A)>0) return temp;
    int carry=1;
    for(int i=(n-1)/2; i>=0; i--){
        int t=A[i]-'0'+carry;
        if(t==10){
            t=0;
            carry=1;
        }
        else carry=0;
        A[i]='0'+t;
    }
    string ans;
    if(carry==1) ans = "1";
    ans += A;
    return makePalindrome(ans);
}
