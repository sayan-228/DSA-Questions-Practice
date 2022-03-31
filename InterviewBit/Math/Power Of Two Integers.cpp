/*
Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

Example:
Input : 4
Output : True  
as 2^2 = 4.

https://www.interviewbit.com/problems/power-of-two-integers/
*/


int Solution::isPower(int A) {
    int upperLimit = (int)(sqrt(A));
    int limit= min(32,upperLimit);
    if (A==1){
        return 1;
    }
    for (int i = 2; i <= upperLimit; i++) {
            long long int prod=1;
            while(prod<A){
                prod*=i;
            }
            if (prod==A){
                return 1;
            }
    }
    return 0;
}
