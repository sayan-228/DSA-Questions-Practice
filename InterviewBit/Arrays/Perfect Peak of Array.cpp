/*
Problem Description
 
Given an integer array A of size N.
You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.
If it exists return 1 else return 0.

NOTE:
Do not consider the corner elements i.e A[0] and A[N-1] as the answer.

Problem Constraints
3 <= N <= 105
1 <= A[i] <= 109

https://www.interviewbit.com/problems/perfect-peak-of-array/
*/

int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    long long int max=A[0];
    long long int min=A[n-1];
    vector<long long int> v1;
    vector<long long int> v2;
    if(n>=3){
        for (int i=1;i<n-1;i++){
            if(A[i]>max){
                max=A[i];
                v1.push_back(max);
            }
        }
        for (int i=n-2;i>0;i--){
            if(A[i]<min){
                min=A[i];
                v2.push_back(min);
            }
        }
        
        int count=0;

        if (v1.size()<=v2.size()){
            for(int i=0; i<v1.size(); i++){
                for(int j=v2.size()-1; j>=0; j--){
                    if(v1[i]==v2[j]){
                        count=0;
                        for (int k=1;k<n-1;k++){
                            if (A[k]==v1[i]) count+=1;
                        }
                        if (count==1)   return 1;
                        else return 0;                    
                    }   
                }
            }
        }
        else{
            for(int j=v2.size()-1; j>=0; j--){
                for(int i=0; i<v1.size(); i++){
                    if(v1[i]==v2[j]){
                        count=0;
                        for (int k=1;k<n-1;k++){
                            if (A[k]==v2[j]) count+=1;
                        }
                        if (count==1)   return 1;
                        else return 0;
                    } 
                }
            }
        }
        return 0;
    }
}
