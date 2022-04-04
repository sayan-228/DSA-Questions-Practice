/*
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).
You may assume that the intervals were initially sorted according to their start times.

Example 1:
Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

Example 2:
Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].
This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

Make sure the returned intervals are also sorted.

https://www.interviewbit.com/problems/merge-intervals/
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

 bool mycomp(Interval a,Interval b){
     return a.start<=b.start;
 }

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    
    int temp;
    if(newInterval.start>newInterval.end){
        temp=newInterval.end;
        newInterval.end=newInterval.start;
        newInterval.start=temp;
    }
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),mycomp);
    vector <Interval> result;
    int n=intervals.size();
    if (n==0)   return intervals;

    result.push_back(intervals[0]);

    int i;
    for(i=1; i<n; i++){
        if(intervals[i].start<=result[result.size()-1].end)
            result[result.size()-1].end=max(result[result.size()-1].end,intervals[i].end);
        else
            result.push_back(intervals[i]);
    }

    return result;
}