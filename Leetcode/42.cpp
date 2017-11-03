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

    int trap(vector<int>& height) {
        
        int l=0, r = height.size()-1;
        int res=0, level=0, low; 
        int idx;
        
        while(l<r) {
            if(height[l] < height[r]) {
                idx = l;
                low = height[l];
                l++;
            }
            else {
                idx = r;
                low = height[r];
                r--;
            }
            
            level = max(level, low);
            res += max(level-height[idx], 0);
//            printf("%d %d\n", res, level);
            
        }
        
//        printf("%d\n", res);
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
    
    trap(vec);
    
    
    return 0; 
}

