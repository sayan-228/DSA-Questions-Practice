// Problem Description

// You are in an infinite 2D grid where you can move in any of the 8 directions

//  (x,y) to 
//     (x-1, y-1), 
//     (x-1, y)  , 
//     (x-1, y+1), 
//     (x  , y-1),
//     (x  , y+1), 
//     (x+1, y-1), 
//     (x+1, y)  , 
//     (x+1, y+1) 
// You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.

// NOTE: This question is intentionally left slightly vague. Clarify the question by trying out a few cases in the “See Expected Output” section.

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int m=A.size();
    int n=B.size();
    int step=0;
    for (int i=0, j=0; i<m-1, j<n-1; i++, j++){
        
        step=step+max(abs(A[i+1]-A[i]),abs(B[j+1]-B[j]));
        
    }
    return step;
}
