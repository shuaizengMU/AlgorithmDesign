/*

template

*/


#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int dfs(vector< vector<int> >& grid, int m, int n) {
        
        if(grid[m][n] == 0)
            return 0;
        
        int orient[4][2] = {
            {-1, 0}, {1, 0}, {0, -1}, {0, 1}
        }; 
        
        int res = 1;
        grid[m][n] = 0;
        
        for(int i=0; i<4; i++){
            if(-1<m+orient[i][0] && m+orient[i][0]<grid.size() && -1<n+orient[i][1] && n+orient[i][1]<grid[0].size())
                res += dfs(grid, m+orient[i][0], n+orient[i][1]);
        }
        
        return res; 
    }
    
    int maxAreaOfIsland(vector< vector<int> >& grid) {
        
        if(grid.empty())
            return 0;
        
        int m = grid.size(); 
        int n = grid[0].size(); 
        int res = 0;
        
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j) {
                if(grid[i][j] != 0 ) {
                    res = max(dfs(grid, i, j), res);
//                    printf("%d %d, %d\n", i, j, res); 
                }
            }
        }
        
        return res; 
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int m, n; 
    scanf("%d %d", &m, &n); 
    
    vector< vector<int> > vec(m, vector<int>(n)); 
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &vec[i][j]); 
    
    
    maxAreaOfIsland(vec); 
    
    
    return 0; 
}

