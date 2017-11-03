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

    void dfs(vector< vector<int> >& res, vector<int>& cur, vector<int>& nums, int idx, unordered_map<string, int>& map){

            string s="";
            for(int i=0; i<cur.size(); i++)
                s += cur[i];
            if( map.find(s) == map.end()) {
                map[s] = 1;
                res.push_back(cur);
                
                for(int i=0; i<cur.size(); i++)
                    printf("%d ", cur[i]);
                printf("\n");
            }
            

        
        for(int i=idx; i<nums.size(); i++) {
            
            cur.push_back(nums[i]);
            dfs(res, cur, nums, i+1, map);
            cur.pop_back();
            
        }
        
    }

    vector< vector<int> > subsetsWithDup(vector<int>& nums) {
        
        vector< vector<int> > res;
        vector< int > cur;
        unordered_map<string, int> map;
        
        sort(nums.begin(), nums.end());
    
        dfs(res, cur, nums, 0, map); 
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
    
    subsetsWithDup(vec);
    
    
    return 0; 
}

