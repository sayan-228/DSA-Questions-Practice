/*
Given a string A representing a roman numeral.
Convert A into integer.
A is guaranteed to be within the range from 1 to 3999.

Input Format
The only argument given is string A.

Output Format
Return an integer which is the integer verison of roman numeral string.

https://www.interviewbit.com/problems/roman-to-integer/
*/

int Solution::romanToInt(string A) {
    int n=A.size();
        int count=0;
        int i;
        for (i=n-1;i>=0;i--){
            if(A[i]=='I'){
                if(A[i+1]=='V') count-=1;
                else if(A[i+1]=='X')    count-=1;
                else    count+=1;
            }

            if(A[i]=='V')   count+=5;
            
            if(A[i]=='X'){
                if(A[i+1]=='L') count-=10;
                else if(A[i+1]=='C')    count-=10;
                else    count+=10;
            }
            if(A[i]=='L')   count+=50;
            
            if(A[i]=='C'){
                if(A[i+1]=='D') count-=100;
                else if(A[i+1]=='M')    count-=100;
                else    count+=100;
            }
            if(A[i]=='D')   count+=500;
            
            if(A[i]=='M')   count+=1000;
            
        }
        
        return count;
        
}
