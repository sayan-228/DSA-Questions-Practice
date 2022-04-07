/*
Given 2 non negative integers m and n, find gcd(m, n)
GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer.

Example
m : 6
n : 9
GCD(m, n) : 3

https://www.interviewbit.com/problems/greatest-common-divisor/
*/

int Solution::gcd(int A, int B) {
    int x=max(A,B);
    int y=min(A,B);
    if(x==0 || y==0)    return max(x,y);
    if(x-y != 0) return gcd(y,x-y);
    else return y;
}
