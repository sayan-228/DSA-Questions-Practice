/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
Return the sum of the three integers.

Assume that there will only be one solution

Example: 
given array S = {-1 2 1 -4}, 
and target = 1.
The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)

https://www.interviewbit.com/problems/3-sum/
*/

//Update in 3 Sum Zero Solution
int Solution::threeSumClosest(vector<int> &A, int B) {
    long long int min=1000000000;
    int n1=A.size();
    vector<long long int> vec_sum;
    sort(A.begin(),A.end());
    int left,right;
    int i;
    if(n1==0)    return -1;
        for (i=0; i<n1-2;i++){
            // if(i>0 and A[i]==A[i-1]){
            //     continue;
            // }
            left=i+1;
            right=n1-1;
            while(left<right){
                long long sum = 0LL + A[i] + A[left] + A[right];
                if(sum==B){
                    return sum;
                    
                    // while(left<n1-1 and A[left]==A[left+1]) left++;
                    // while(right>left and A[right]==A[right-1]) right--;
                    left++;
                    right--;
                }
                else if (sum<B){
                    if (abs(sum-B)<=min){
                        min=abs(sum-B);
                        vec_sum.push_back(sum);
                    }
                    left++;
                }  
                else {
                    if (abs(sum-B)<=min){
                        min=abs(sum-B);
                        vec_sum.push_back(sum);
                    }
                    right--;
                }    
            }
        }
        
        return vec_sum[vec_sum.size()-1];
}
