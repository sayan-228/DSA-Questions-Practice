/*
Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version

Input Format
The only argument given is integer A.

Output Format
Return a string denoting roman numeral version of A.

Constraints
1 <= A <= 3999

https://www.interviewbit.com/problems/integer-to-roman/
*/

string Solution::intToRoman(int A) {
    vector<int> num_code{1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int size=num_code.size();
        vector<int> result;
        string output ="";
        int x=A;
        while(x!=0){
            int i=0;
            while(i<size){
                if((x-num_code[i])>=0)   i++;
                else break;
            }
            result.push_back(num_code[i-1]);
            x-=num_code[i-1];
        }
        
        for (int i=0;i<=result.size()-1;i++){
            if (result[i]==1)   output+="I";
            else if (result[i]==4)  output+="IV";
            else if (result[i]==5)  output+="V";
            else if (result[i]==9)  output+="IX";
            else if (result[i]==10) output+="X";
            else if (result[i]==40) output+="XL";
            else if (result[i]==50) output+="L";
            else if (result[i]==90) output+="XC";
            else if (result[i]==100)    output+="C";
            else if (result[i]==400)    output+="CD";
            else if (result[i]==500)    output+="D";
            else if (result[i]==900)    output+="CM";
            else if (result[i]==1000)   output+="M";
            
        }
        
        return output;
}
