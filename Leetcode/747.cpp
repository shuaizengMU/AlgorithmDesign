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

int dominantIndex(vector<int>& nums) {
    
    if(nums.size()<1)
        return -1;
    
    if(nums.size()==1)
        return 0;
    
    
    int maxn = nums[0];
    int maxn_idx = 0;
    int maxn2 = -1;
    
    
    for(int i=1; i<nums.size(); ++i) {
        
        
        if(nums[i] > maxn) {
            
            maxn2 = maxn;
            
            maxn = nums[i]; 
            maxn_idx = i;
        }
        else if(nums[i] > maxn2)
            maxn2 = nums[i];
//        printf("-- %d %d %d\n", maxn, maxn2, maxn_idx); 
        
    }
    
//    printf("%d %d %d\n", maxn, maxn2, maxn_idx); 
    
    if(maxn >= maxn2*2)
        return maxn_idx;
    else
        return -1;
        
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
    
    dominantIndex(vec); 
    
    
    
    
    return 0; 
}

