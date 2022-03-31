/*
Problem Description

Implement pow(x, n) % d.
In other words, given x, n and d,
find (xn % d)

Note that remainders on division cannot be negative. In other words, make sure the answer you return is non negative.

Problem Constraints
-109 <= x <= 109
0 <= n <= 109
1 <= d <= 109

https://www.interviewbit.com/problems/implement-power-function/
*/

/**
 * @input x : Integer
 * @input n : Integer
 * @input d : Integer
 * 
 * @Output Integer
 */

int powmod(int x, int n, int d) {
 
    if (d==1)   return 0;
    long long int ans=1,y=x%d;
    while(n>0){
        if(n&1)
         ans=((ans)*y)%d;
        y=(y*y)%d;
        if(y<0) y+=d;
        n=n>>1;
    }
    if(ans<0){
        ans=(d-abs(ans)%d);
        return ans;
    }
    return ans%d;

}
