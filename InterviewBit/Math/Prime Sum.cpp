/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s  conjecture

Example:
Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then
[a, b] < [c, d] 

If a < c OR a==c AND b < d. 

https://www.interviewbit.com/problems/prime-sum/
*/


int checkPrime(int A) {
    int upperLimit = (int)(sqrt(A));
    if (A==1){
        return 0;
    }
    else if (A==2){
        return 2;
    }
    else if (A==3){
        return 3;
    }
    else{
        for (int i = 2; i <= upperLimit; i++) {
            if (A % i == 0) return 0;
        }
        return A;
    }
}



vector<int> Solution::primesum(int A) {
    vector<int> result(2);
    if (A>2 and A%2==0){
        int n1=0, n2=0;
        for (int i=2; i<=A/2; i++){
            n1=i;
            n2=A-n1;
            int num1=checkPrime(n1);
            int num2=checkPrime(n2);
            if (num1!=0 and num2!=0){
                result[0]=num1;
                result[1]=num2;
                return result;
            }
            else continue;
        }
        
    return result;    
    }
}
