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

    bool canJump(vector<int>& nums) {
        
        if(nums.size()==1)
            return true;
        
        int max_idx=nums[0]; 
        for(int i=1; i<nums.size();i++) {
            
            if(max_idx < i)
                return false; 
            max_idx = max(max_idx, i+nums[i]);
            if(max_idx >= nums.size()-1)
                return true; 
        }
        
        return false; 
        
        
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
    
    canJump(vec); 
    
    
    return 0; 
}

