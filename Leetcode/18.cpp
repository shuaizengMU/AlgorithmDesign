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

    
    void dfs(vector< vector<int> > &res, unordered_map<string, int> &map, vector<int>& nums, vector<int> &cur, int target, int idx) {
        

        if(cur.size()==4 && 0==target) {
            
            string s = ""; 
            for(int i=0; i<cur.size(); i++)
                s += to_string(cur[i]); 
            
            if(map.find(s) == map.end()) {
                res.push_back(cur); 
                map[s] = 1;

            }  
            return;
        }
        
        int mini=0, maxi=0;
        for(int i=0; i<4-cur.size() && (idx+i)<nums.size(); i++) {
            mini += nums[idx+i];
            maxi += nums[nums.size()-1-i];
//            printf("%d %d, %d %d %d\n", idx+i, cur.size(), mini, target, maxi); 
        }
        
//        printf("-- %d %d %d\n", mini, target, maxi); 
        if(mini<=target && target<=maxi){
            
            for(int i=idx; i<nums.size(); i++) { 
                cur.push_back(nums[i]); 
                if(cur.size()<=4) {
                    dfs(res, map, nums, cur, target-nums[i], i+1); 
                }
                cur.pop_back(); 
            
            }
        }
            
        
    }

    
    vector< vector<int> > fourSum(vector<int>& nums, int target) {
        
        if(nums.size()==0)
            return vector< vector<int> >();
        
        
        
        vector< vector<int> > res; 
        unordered_map<string, int> map;
        
        vector<int> cur; 
        
        sort(nums.begin(), nums.end());
        
        
        dfs(res, map, nums, cur, target, 0); 
        
        return res; 
        
        
    }


int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n,t; 
    scanf("%d %d", &n, &t); 
    
    vector<int> vec(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    
//    for(int i=0; i<n; i++)
//        printf("%d ", vec[i]); 
//    printf("\n"); 
//    
    vector< vector<int> > res; 
    res = fourSum(vec, t); 
    
        for(int i=0; i<res.size(); i++) {
            
            for(int j=0; j<res[0].size(); j++)
                printf("%d ", res[i][j]); 
            printf("\n"); 
        }
    
    
    return 0; 
}

