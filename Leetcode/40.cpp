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

    void dfs(vector< vector<int> >& res, vector<int>& cur, vector<int>& candidates, int idx, int target, unordered_map<string, int>& map) {
        
        if(target == 0) {
            string s = ""; 
            for(int i=0; i<cur.size(); i++)
                s += cur[i]; 
            if(map.find(s) == map.end()) {
                res.push_back(cur); 
                map[s] = 1;
                
                for(int i=0; i<cur.size(); i++)
                    printf("%d ", cur[i]); 
                printf("\n"); 
            }   
            return;
        }
        
        
//        printf("%d %d", target, candidates[idx]); 
        for(int i=idx; i<candidates.size() && target>=candidates[i]; i++) {
            
            cur.push_back(candidates[i]); 
            dfs(res, cur, candidates, i+1, target-candidates[i], map); 
            cur.pop_back(); 
            
            
        }
        
    }

    vector< vector<int> > combinationSum2(vector<int>& candidates, int target) {
        
        vector< vector<int> > res;
        unordered_map<string, int> map; 
        vector<int> cur;
        
        sort(candidates.begin(), candidates.end()); 

        dfs(res, cur, candidates, 0, target, map); 
        return res;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, t; 
    scanf("%d %d", &n, &t); 
    vector<int> vec(n); 
    
    for(int i=0; i<n; i++) 
        scanf("%d", &vec[i]); 
    
    combinationSum2(vec, t); 
    
    
    return 0; 
}

