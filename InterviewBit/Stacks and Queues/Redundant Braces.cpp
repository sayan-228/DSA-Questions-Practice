/*
Problem Description

Given a string A denoting an expression. It contains the following operators '+', '-', '', '/'.
Check whether A has redundant braces or not.

NOTE: A will be always a valid expression.

Problem Constraints
1 <= |A| <= 105

https://www.interviewbit.com/problems/redundant-braces/
*/

int Solution::braces(string A) {
    int n=A.size();
    stack <char> s1;
int i=0;
while(i<n){
	if(A[i]=='(' || A[i]=='+' || A[i]=='-' || A[i]=='*' || A[i]=='/')	s1.push(A[i]);
	else if(A[i]==')'){
		if (s1.top()=='(')	return 1;
		else{
			while(!s1.empty() and s1.top()!='(')	s1.pop();
			s1.pop();
		}
	}
    i++;
}

return 0;
}
