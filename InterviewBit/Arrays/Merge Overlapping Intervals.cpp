/*
Given a collection of intervals, merge all overlapping intervals.

For example:
Given [1,3],[2,6],[8,10],[15,18],
return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.

https://www.interviewbit.com/problems/merge-overlapping-intervals/
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 * };
 *
 * typedef struct Interval interval;
 */
/*
 * intervals : the array of interval
 * sz : number of entries in intervals
 * len : populate the length of returned array of intervals in len
 */
bool mycomp(Interval a,Interval b){
     return a.start<b.start;
 }
 
vector<Interval> Solution::merge(vector<Interval> &intervals) {
    int n=intervals.size();
    sort(intervals.begin(),intervals.end(),mycomp);
    vector <Interval> result;

    result.push_back(intervals[0]);

    for(int i=1; i<n; i++){
        if(intervals[i].start<=result[result.size()-1].end)
            result[result.size()-1].end=max(result[result.size()-1].end,intervals[i].end);
        else
            result.push_back(intervals[i]);
    }

    return result;
}
