/*
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? 
Find all unique triplets in the array which gives the sum of zero.

Note:
Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
The solution set must not contain duplicate triplets.

For example, given array S = {-1 0 1 2 -1 -4},
A solution set is:
  (-1, 0, 1)
  (-1, -1, 2)

https://www.interviewbit.com/problems/3-sum-zero/
*/


vector<vector<int> > Solution::threeSum(vector<int> &A) {
        int n=A.size();
        vector<vector<int>> output;
        sort(A.begin(),A.end());
        
        int left,right;
        int i, index=0;
        
        if(n==0)    return output;
        for (i=0; i<n-2;i++){
            if(i>0 and A[i]==A[i-1]){
                continue;
            }
            left=i+1;
            right=n-1;
            while(left<right){
                long long sum = 0LL + A[i] + A[left] + A[right];
                if(sum==0){
                    output.push_back({A[i], A[left], A[right]});
                    while(left<n-1 and A[left]==A[left+1]) left++;
                    while(right>left and A[right]==A[right-1]) right--;
                    left++;
                    right--;
                }
                else if (sum<0)  left++;
                else right--;    
            }
        }
        
        return output;
 
}
