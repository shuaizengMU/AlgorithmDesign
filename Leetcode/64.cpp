/*

template

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int minPathSum(vector< vector<int> >& grid) {
        
        if(grid.empty())
            return 0;
        
        int m = grid.size(); 
        int n = grid[0].size(); 
        
        
        printf("%d %d\n", m, n); 
        
        for(int i=1; i<n; i++)
            grid[0][i] += grid[0][i-1];
        
        for(int j=1; j<m; j++)
            grid[j][0] += grid[j-1][0];
        
        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]); 
            }
        }
        

        
//         for(int i=0; i<m; i++) {
//            for(int j=0; j<n; j++) {
//                printf("%d ", grid[i][j]);
//            }
//            printf("\n");
//        }
        
        printf("%d\n", grid[m-1][n-1]);
        
        return grid[n-1][m-1];
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int m, n; 
    scanf("%d %d", &m, &n); 
    vector< vector<int> > vec(m, vector<int>(n, 0)); 
    
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &vec[i][j]); 
    
    minPathSum(vec); 
    
    
    return 0; 
}

