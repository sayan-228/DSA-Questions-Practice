/*
Problem Description
 
Given an array of all positive integers and an element “x”. 

You need to find out whether all array elements can be made equal or not by performing any of the 3 operations: add x to any element in array, subtract x from any element from array, do nothing.
This operation can be performed only once on an element of array.

Problem Constraints
1<=|A|<=1e5
1<=A[i],x<=1e9

https://www.interviewbit.com/problems/make-equal-elements-array/
*/

int Solution::solve(vector<int> &A, int B) {
    set<int> s1;
    long long int n=A.size();
        for(long long int i=0;i<n;i++)	s1.insert(A[i]);

    if(s1.size()>3 || s1.size()==0) cout << 0 << endl;
    else{
        if(s1.size()==1)   return 0;
        else{
            vector<int> compare;
            for (auto itr : s1)     compare.push_back(itr);

            if (s1.size()==2){
                if (abs(compare[1]-compare[0]) == B)  return 1;
                else return 0;
            }
            else{
                if (abs(compare[1]-compare[0]) == B && abs(compare[2]-compare[1]) == B)  return 1;
                else return 0;
            }
        }
                
    }
}
