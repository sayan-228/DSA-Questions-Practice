/*
Given a string A.
Return the string A after reversing the string word by word.

NOTE:
A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space in the reversed string.

Input Format
The only argument given is string A.
Output Format
Return the string A after reversing the string word by word.
For Example

Input 1:
    A = "the sky is blue"
Output 1:
    "blue is sky the"

https://www.interviewbit.com/problems/reverse-the-string/
*/


string Solution::solve(string A) {
    string result = "";
    for(int i = A.length()-1; i>-1; --i)
    {
        if (A[i] != ' ')
        {
          int last = i;
          int first = i;
          while (i>-1 && A[i] != ' ')
              --i;
              
          first = i + 1;
          
          //append new word
          result.append(A.begin()+first, A.begin()+last+1);
          
          //if not last word then add a space
          if (i>0)
          {
            string str = A.substr(0, i+1);
            string temp = "";
            temp.append(i+1, ' ');
            if(str != temp)
                result += ' ';
          }
        }
    }
    A = result;

    return result;
}