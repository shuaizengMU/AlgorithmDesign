/*

59. Spiral Matrix II

https://leetcode.com/problems/spiral-matrix-ii/description/

Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

For example,
Given n = 3,

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    vector< vector<int> > generateMatrix(int n) {
        
        int d[4][2] = { {0,1}, {1,0}, {0,-1}, {-1, 0} };
        int dir = 0;
        
        vector< vector<int> > res(n, vector<int>(n, 0));
        int x=0, y=0;
        int tmp_x, tmp_y;
        for(int i=1; i<=n*n; ++i) {
            
            res[x][y] = i;
            
//            printf("%d , %d, %d\n", res[x][y], x, y);
            
            tmp_x = x; 
            tmp_y = y;
            x += d[dir][0];
            y += d[dir][1];
            
            
//            printf("-   %d, %d\n", x, y);
            
            if((x==0 && y==n) || (x==n && y==n-1) || (x==n-1 && y==-1) || res[x][y] !=0) {
                dir = (dir+1)%4;
                x = tmp_x+d[dir][0];
                y = tmp_y+d[dir][1];
            }
            
        }
        
//        for(int i=0; i<n; i++){
//            for(int j=0; j<n; j++)
//                printf("%d ", res[i][j]);
//            printf("\n");
//        }
        
        return res;
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n);
    generateMatrix(n); 
    
    return 0; 
}

