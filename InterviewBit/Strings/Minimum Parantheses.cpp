/*
Problem Description

Given a string A of parantheses  ‘(‘ or ‘)’.
The task is to find minimum number of parentheses ‘(‘ or ‘)’ (at any positions) we must add to make the resulting parentheses string valid.

An string is valid if:
Open brackets must be closed by the corresponding closing bracket.
Open brackets must be closed in the correct order.

Problem Constraints
1 <= |A| <= 105
A[i] = '(' or A[i] = ')'

https://www.interviewbit.com/problems/minimum-parantheses/
*/

int Solution::solve(string A) {
    int n=A.size();
    int closed_p=0;
    stack<char> stack1;

    for(int i=0; i<n;i++){
	    if(A[i]=='(') stack1.push(A[i]);

	    if(A[i]==')'){
		    if(stack1.empty())	closed_p+=1;
		    else stack1.pop();
	    }
    }
	return closed_p+stack1.size();
}
