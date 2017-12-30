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

    int findLength(vector<int>& A, vector<int>& B) {
        
        int m = A.size(); 
        int n = B.size(); 
        
        if(m==0 || n==0)
            return 0;
        
        vector<int> dp(m+1);
        int res = 0;
        for(int i=m-1; i>=0; --i) 
            for(int j=0; j<n; ++j) {
                res = max(res, dp[j] = A[i]==B[j] ? 1+dp[j+1]:0 );
                
            }
        
        
//        printf("%d\n", res); 
        return res;
        
    }



int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int m, n; 
    scanf("%d %d", &m, &n); 
    
    vector<int> A(m); 
    vector<int> B(n); 
    
    for(int i=0; i<m; i++)
        scanf("%d", &A[i]); 
    
    for(int i=0; i<n; i++)
        scanf("%d", &B[i]); 
    
    findLength(A, B); 
     
    
    return 0; 
}

