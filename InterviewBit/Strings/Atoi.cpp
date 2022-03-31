/*
Implement atoi to convert a string to an integer.

Example :
Input : "9 2704"
Output : 9
Note: There might be multiple corner cases here. Clarify all your doubts using “See Expected Output”.

Questions:
Q1. Does string contain whitespace characters before the number?
A. Yes

Q2. Can the string have garbage characters after the number?
A. Yes. Ignore it.

Q3. If no numeric character is found before encountering garbage characters, what should I do?
A. Return 0.

Q4. What if the integer overflows?
A. Return INT_MAX if the number is positive, INT_MIN otherwise.

Warning : DO NOT USE LIBRARY FUNCTION FOR ATOI.

https://www.interviewbit.com/problems/atoi/
*/

int Solution::atoi(const string A) {
    long long int n=A.size();
        long long int num=0;
        int flag=0;
        for (long long int i=0; i<n; i++){
            char c= A[i];
            if (int(c)>=48 and int(c)<=57){
                num= num*10+int(A[i]-48);
            }
            else{
                if (int(c)<48 or int(c)>57) {
                    if (num==0){
                        if(c=='-'){
                            flag=1;
                        }
                        else if (c==' '){
                            break;
                        }
                        else continue;
                    }
                        
                    else break;
                }
            }
        }
        
        if (flag==1)    return num-2*num;
        else return num;
}
