/*
Problem Description

An arithmetic expression is given by a charater array A of size N. Evaluate the value of an arithmetic expression in Reverse Polish Notation.
Valid operators are +, -, , /. Each character may be an integer or an operator.

Problem Constraints
1 <= N <= 105

https://www.interviewbit.com/problems/evaluate-expression/
*/

int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/"){
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            if(A[i] == "+"){
                st.push(second+first);
            }
            else if(A[i] == "-"){
                st.push(second-first);
            }
            else if(A[i] == "*"){
                st.push(second*first);
            }
            else{
                st.push(second/first);
            }
        }
        else{
            st.push(stoi(A[i]));
        }
    }
    
    return st.top();
}
