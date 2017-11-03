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

    int maxArea(vector<int>& height) {
        
        int l=0, r=height.size()-1;
        int res=0;
        int low;
        
        while(l<r) {
            low = height[ height[l]<height[r] ? l++:r--];
            res = max(res, low*(r-l+1));
            
        }
        
        printf("%d\n", res);
        return res;
        
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]);
    
    maxArea(vec);
    
    
    return 0; 
}

