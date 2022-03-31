/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem

https://www.interviewbit.com/problems/palindrome-string/
*/

int Solution::isPalindrome(string A) {
    int length1=A.size();
    vector<int> palindrome;
    for(int i=0; i<length1; i++){
        int a=A[i] - '0';
        if(a>=0){
            if(a>=17 and a<=42) palindrome.push_back(tolower(A[i]));
            else if((a>=0 and a<=9) or (a>=49 and a<=74)) palindrome.push_back(A[i]);
            else continue;
        }
        else continue;
    }

    int n=palindrome.size();
    int i, j;
    for (int i=0, j=n-1; i<=j; i++, j--){
        if (palindrome[i]==palindrome[j]) continue;
        else return 0;
    }
    return 1;
}
