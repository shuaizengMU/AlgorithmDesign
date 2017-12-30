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

    int dfs(vector<int>& nums, vector<int> &dp, int dept, int idx){
        
        if(dp[idx] != -1)
            return dp[idx]+dept;
        
        if(nums[idx] == -1)
            return dept;
        
        int next_idx = nums[idx];
        nums[idx] = -1;
        dp[idx] = dfs(nums, dp, dept+1, next_idx);
        
        return dp[idx];
    }

    int arrayNesting(vector<int>& nums) {
        
        int maxn = 0;
        vector<int> dp(nums.size(), -1); 
        for(int i=0; i<nums.size(); i++) {
            maxn = max(maxn, dfs(nums, dp, 0, i)); 
        }
        return maxn; 
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
    
    arrayNesting(vec); 
    
    
    
    return 0; 
}

