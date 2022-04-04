/*
Problem Description

Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

Input Format
First and only argument is an integer array A.

Output Format
Return an integer denoting the maximum value of j - i.

https://www.interviewbit.com/problems/max-distance/
*/

int Solution::maximumGap(const vector<int> &A) {
    
    int n=A.size();

    if (n==0 or n==1) return 0;
    else if(n==2)	return ((A[0]<=A[1])?1:-1);
    else{

	    vector<pair<int,int> >	order;
    	for(int i=0;i<n;i++){
            order.push_back(make_pair(A[i],i));
    	}
	    sort(order.begin(),order.end());
	    int ans=0;
    	int rmax=order[n-1].second;
    	for(int i=n-2;i>=0;i--){
        	ans=max(ans,rmax-order[i].second);
        	rmax=max(rmax,order[i].second);
    	}
    return ans;
    }
}
