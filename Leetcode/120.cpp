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

    int minimumTotal(vector< vector<int> >& triangle) {
        
//        for(int i=1; i<triangle.size(); i++) 
//            triangle[i].push_back(0); 
        
        for(int i=1; i<triangle.size(); i++) {
            for(int j=0; j<triangle[i].size(); j++) {
                
                if(j==0)
                    triangle[i][j] += triangle[i-1][j];
                else if(j==triangle[i].size()-1)
                    triangle[i][j] += triangle[i-1][j-1];
                else
                    triangle[i][j] += min(triangle[i-1][j], triangle[i-1][j-1]); 
            }
            
        }
        
//        for(int i=0; i<triangle.size(); i++) {
//            for(int j=0; j<triangle[i].size(); j++) {
//                
//                printf("%d ", triangle[i][j]); 
//            }
//            printf("\n"); 
//            
//        }
        
        int nmin = 99999;
        int m = triangle.size()-1; 
        for(int j=0; j<triangle[m].size(); j++)
            nmin = min(nmin, triangle[m][j]);
        
//        printf("%d\n", nmin); 
        
        return nmin; 
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, tmp; 
    scanf("%d", &n); 
    
    vector< vector<int> > mat; 
    
    for(int i=0; i<n; i++) {
        vector<int> vec(i+1); 
        for(int j=0; j<i+1; j++) 
            scanf("%d", &vec[j]); 
        mat.push_back(vec);
    }
    
    minimumTotal(mat);
    
    
    return 0; 
}

