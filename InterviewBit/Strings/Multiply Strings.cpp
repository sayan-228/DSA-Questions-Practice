/*
Given two numbers represented as strings, return multiplication of the numbers as a string.

Note: The numbers can be arbitrarily large and are non-negative.
Your answer should not have leading zeroes. For example, 00 is not a valid answer.

For example, 
given strings "12", "10", your answer should be “120”.

https://www.interviewbit.com/problems/multiply-strings/
*/

string Solution::multiply(string A, string B) {
    vector<int> n1;
    vector<int> n2;
        
    vector<int> result(A.size()+B.size());
    string output="";
        
    if(A=="0" or B=="0")  return "0";
        
    for (int i=A.size()-1; i>=0;i--){
        int num= A[i] - '0';
        n1.push_back(num);
    } 
    for (int i=B.size()-1; i>=0;i--){
        int num= B[i] - '0';
        n2.push_back(num);
    }     
        
    //outer loop with respect to second number
    for(int j=0;j<=n2.size()-1;j++){
        for (int i=0;i<=n1.size()-1;i++){
            int prod=n1[i]*n2[j];
            int set=result[i+j] + prod%10;
            result[i+j]= set%10;
            result[i+j+1]+= + prod/10 + set/10;
        }
    }
        
    int i=result.size()-1;
    while(result[i]==0)   i--;
    while(i>=0){
        output+=to_string(result[i]);
        i--;
    }
        
    // if(output[0]=='0') output.erase(output.begin());
    return output;
}
