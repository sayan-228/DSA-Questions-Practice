/*
Problem Description

Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).
The digits are stored such that the most significant digit is at the head of the list.

NOTE: Some good questions pertaining to this problem are :

Q : Can the input have 0's before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0's before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

Input Format
First argument is an array of digits.

Output Format
Return the array of digits after adding one.

https://www.interviewbit.com/problems/add-one-to-number/
*/


vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> result;
    int n=A.size();
    int carry=0;
        if(A[n-1]==9){
            A[n-1]=0;
            carry=1;
        }
        else A[n-1]+=1;
        if(n>1){
        for (int i=n-2; i>=0; i--){
            if(A[i]==9 and carry==1){
                A[i]=0;
                carry=1;
            }
            else if (A[i]!=9 and carry==1){
                A[i]+=1;
                carry=0;
            }
            else {
                carry=0;
                continue;
            }
        }
        }
    if (carry==1){
        result.push_back(1);
    }
    int flag=0;
    for (int i=0; i<n; i++){
        if ((A[i]<=0) and (carry==1)){         
            result.push_back(A[i]);
        }
        else if ((A[i]<=0) and (carry==0) and (flag==0)){
            continue;
        }
        else if ((A[i]<=0) and (carry==0) and (flag==1)){
            result.push_back(A[i]);
        }
        else {
            result.push_back(A[i]);
            flag=1;
        }
    }
    
    return result;
}
