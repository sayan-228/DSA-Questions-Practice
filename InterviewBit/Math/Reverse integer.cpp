/*
Problem Description

You are given an integer N and the task is to reverse the digits of the given integer. Return 0 if the result overflows and does not fit in a 32 bit signed integer.

Problem Constraints
N belongs to the Integer limits.

Input Format
Input an Integer.

Output Format
Return a single integer denoting the reverse of the given integer.

Example Input
Input 1:
x = 123
Input 2:
x = -123

Example Output
Output 1:
321
Output 2:
-321

https://www.interviewbit.com/problems/reverse-integer/
*/

int Solution::reverse(int A) {
    vector<int> result;
    
    int rem=0,num=abs(A);
    cout<< num << endl;
        while(num>0){
            rem=num%10;
            num/=10;
            result.push_back(rem);
        }
    
    long long int verify=0;
    signed int sum=0;
    for (int i=0; i<result.size();i++){
        sum=sum*10 + result[i];
        verify=verify*10 + result[i];
        
    }
    
    if(sum==verify){
    if (A==0){
        return 0;
    }
    else if (A>0){
        return sum;
    }
    else{
        return sum-(2*sum);
    }
    }
    else return 0;
}
