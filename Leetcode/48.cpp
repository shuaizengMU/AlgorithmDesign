/*

48. Rotate Image

https://leetcode.com/problems/rotate-image/description/

You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Note:
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example 1:

Given input matrix = 
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

rotate the input matrix in-place such that it becomes:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    void rotate(vector<vector<int> >& matrix) {
        
        int len = matrix.size();
        int x1, y1;
        int x2, y2;
        
        for(int i=0; i<len/2; ++i) {
            for(int j=i; j<len-1-i; ++j) {
                x1=i, y1=j;
                for(int k=0; k<3; ++k) {

                    x2=len-1-y1, y2=x1;        
                    swap(matrix[x1][y1], matrix[x2][y2]);
                    x1=x2, y1=y2;
                }
            }
        }
        
//        for(int i=0; i<len; i++) {
//            for(int j=0; j<len; j++)
//                printf("%d ", matrix[i][j]);
//            printf("\n"); 
//        }

    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n;
    scanf("%d", &n);
    vector< vector<int> > nums(n, vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &nums[i][j]);
    
    rotate(nums);
    
    
    
    return 0; 
}

