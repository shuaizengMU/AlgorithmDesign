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

    vector< vector<int> > generate(int numRows) {
        
        vector< vector<int> > res(numRows, vector<int>() );
        
        for(int i=0; i<numRows; i++)
            res[i].push_back(1);
        
        for(int i=1; i<numRows; i++) {
            
            for(int j=1; j<(i+2)/2; j++) {
                res[i].push_back( res[i-1][j-1]+res[i-1][j] );
            }
            
            for(int j=(i+2)/2; j<=i; j++) {
                res[i].push_back( res[i][i-j] );
            }
            
            
//            for(int j=0; j<=i; j++)
//                printf("%d ", res[i][j]);
//            printf("\n"); 
        }
        
        
        
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    generate(n); 
    
    
    
    
    return 0; 
}

