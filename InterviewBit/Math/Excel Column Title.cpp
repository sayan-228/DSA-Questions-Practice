/*
Problem Description

Given a positive integer A, return its corresponding column title as appear in an Excel sheet.

Problem Constraints
1 <= A <= 1000000000

https://www.interviewbit.com/problems/excel-column-title/
*/

string Solution::convertToTitle(int A) {
    int n=A;
        char str[10]; 
        int i = 0; 
 
        while (n > 0) {
        int rem = n % 26;
            if (rem == 0) {
                str[i++] = 'Z';
                n = (n / 26) - 1;
            }
            else
            {
                str[i++] = (rem - 1) + 'A';
                n = n / 26;
            }
        }
        str[i] = '\0';
 
    reverse(str, str + strlen(str));
    return str;

}
