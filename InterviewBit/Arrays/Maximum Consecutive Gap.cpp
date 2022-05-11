/*
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Example :
Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.

https://www.interviewbit.com/problems/maximum-consecutive-gap/
*/

int Solution::maximumGap(const vector<int> &A) {
        int n=A.size();
        if (n==0 or n==1)   return 0;
        int min1=INT_MAX;
        int max1=INT_MIN;

        for(int i=0; i<n;i++){
           if (A[i]<min1) min1=A[i];
            if (A[i]>max1) max1=A[i];
        }
        
        if(n==2)    return max1-min1;
        
        float diff=max1-min1+1;
        int min_index[n+1];
        int max_index[n+1];
        vector<int> result;
        fill_n(max_index, n+1, INT_MIN);
        fill_n(min_index, n+1, INT_MAX);
 

        for(int i=0; i<n;i++){
            if (A[i] == max1 or A[i] == min1)   continue;

            int index=(A[i]-min1)*float(n)/diff;
            min_index[index]=min(min_index[index],A[i]);
            max_index[index+1]=max(max_index[index+1],A[i]);
        }
        
        result.push_back(min1);
        for(int i=0; i<n;i++){
            if(min_index[i]==INT_MAX and max_index[i]==INT_MIN)   continue;
            else if (min_index[i]==INT_MAX)    result.push_back(min(min_index[i],max_index[i]));
            else    result.push_back(max(min_index[i],max_index[i]));
        }
        result.push_back(max1);
        

        int max_diff=-1;
        for(int i=1; i<result.size();i++){
            if ((result[i]-result[i-1])>=max_diff)    max_diff=result[i]-result[i-1];
        } 
        
        return max_diff;
}
