/*
Problem Description

You are given a binary string A(i.e. with characters 0 and 1) consisting of characters A1, A2, ..., AN. In a single operation, you can choose two indices L and R such that 1 ≤ L ≤ R ≤ N and flip the characters AL, AL+1, ..., AR. By flipping, we mean change character 0 to 1 and vice-versa.
Your aim is to perform ATMOST one operation such that in final string number of 1s is maximised.
If you don't want to perform the operation, return an empty array. Else, return an array consisting of two elements denoting L and R. If there are multiple solutions, return the lexicographically smallest pair of L and R.

NOTE: Pair (a, b) is lexicographically smaller than pair (c, d) if a < c or, if a == c and b < d.

Input Format
First and only argument is a string A.

Output Format
Return an array of integers denoting the answer.

Example Input
Input 1:
A = "010"
Input 2:
A = "111"

Example Output
Output 1:
[1, 1]
Output 2:
[]

https://www.interviewbit.com/problems/flip/
*/


vector<int> Solution::flip(string A) {
    int n=A.length();
    vector<int> v(n), result;
    
    for(int i=0;i<n;i++)
    {   
        if(A[i]=='1') v[i]=-1;
        else v[i]=1;
    }
    
    int ms=0, me=0, st=INT_MAX, e=INT_MAX, k=0;
    
    for(int i=0; i<n; i++)
    {
        if(me+v[i]<0)
        {
            k=i+1;
            me=0;
        }
        else me+=v[i];
        
        if(me>ms)
        {
            ms=me;
            st=k;
            e=i;
        }
    }
    
    if(st==INT_MAX) return vector<int>();
    
    result.push_back(st+1); 
    result.push_back(e+1);
    
    return result;
}
