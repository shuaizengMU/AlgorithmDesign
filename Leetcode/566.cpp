/*

In MATLAB, there is a very useful function called 'reshape', which can reshape a matrix into a new one with different size but keep its original data.

You're given a matrix represented by a two-dimensional array, and two positive integers r and c representing the row number and column number of the wanted reshaped matrix, respectively.

The reshaped matrix need to be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


vector<vector<int> > matrixReshape(vector<vector<int> >& nums, int r, int c) {
    
    int mr = nums.size(); 
    int mc = nums[0].size();
    int mi, mj, vi, vj; 
    
    if( mr*mc != r*c)
        return nums;
    
    vector<vector<int>> vec2d(r, vector<int>(c, 0));
    
    for(int i=0; i<r*c; i++){
        
        mi = i/mc;
        mj = i%mc;
        
        vi = i/c;
        vj = i%c;
        
//        printf("%d %d, %d %d, %d\n", mi, mj, vi, vj, nums[mi][mj]); 
        
        vec2d[vi][vj] = nums[mi][mj];
    }
    
    return vec2d;
    
}



int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int r,c; 
    int a; 
    vector<vector<int> > nums; 
    vector<vector<int> > res; 
    scanf("%d %d", &r, &c); 
    
    for(int i=0; i<r; i++){
        vector<int> vec;
        for(int j=0; j<c; j++){
            scanf("%d", &a); 
//            printf("%d", a); 
            vec.push_back(a); 
        }
        
        nums.push_back( vec ); 
    }
    
    scanf("%d %d", &r, &c); 
//    printf("%d %d", r, c); 
    
    res = matrixReshape( nums, r, c); 
    
    
    printf("%d %d\n", res.size(), res[0].size()); 
    
    return 0; 
}