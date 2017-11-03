/*

62. Unique Paths
https://leetcode.com/problems/unique-paths/description/

A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int uniquePaths(int m, int n) {
        
        double res=1;
        for(int i=1; i<=n-1; ++i) {
            res *= (m-1+i)*1.0/i;
//            printf("- %d\n", res);
        }
            
        
//        printf("%d\n", int(res));
        return round(res);
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int m, n; 
    scanf("%d %d", &m, &n);
    uniquePaths(m,n);
    
    return 0; 
}

