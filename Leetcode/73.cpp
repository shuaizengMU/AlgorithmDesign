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

    void setZeroes(vector< vector<int> >& matrix) {
        
        int rowzero, col0;
        
        
        
        
        
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
    
    setZeroes(vec);
    
    
    return 0; 
}

