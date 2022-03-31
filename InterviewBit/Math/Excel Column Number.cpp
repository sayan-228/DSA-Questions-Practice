/*
Problem Description

Given a column title A as appears in an Excel sheet, return its corresponding column number.

Problem Constraints
1 <= |A| <= 100

https://www.interviewbit.com/problems/excel-column-number/
*/

int Solution::titleToNumber(string A) {
        int n=A.size();
        vector<int> conversion;
        long long int sum=0;
        
        for(int i=n-1; i>=0;i--){
            int a=(A[i] - '0')-16;
            conversion.push_back(a);
        }
        
        for(int i=0; i<conversion.size();i++){
            sum += conversion[i]*pow(26,i);
        }
        
        return sum;
}
