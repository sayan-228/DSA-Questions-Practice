/*
Problem Description

Given a string A consisting only of '(' and ')'.
You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.

Problem Constraints
1 <= |A| <= 105

interviewbit.com/problems/balanced-parantheses/
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
	if ((closed_p+stack1.size())==0) return 1;
	else return 0;
}
