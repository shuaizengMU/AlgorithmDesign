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

    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int, int> map;
        
        int res=0; 
        int cnt;
        
        for(int i=0; i<nums.size(); i++)
            map[ nums[i] ] = 1;
        
        unordered_map<int, int>::iterator it = map.begin();
        while(it != map.end()) {
            
            if(it->second > 1) {
                it++;
                continue;
            }
                
            
            cnt = 1;
            for(int i=1; i<map.size(); ++i) {
                
                if( map.find(it->first-i ) != map.end()) {
                    cnt++;
                    map[ it->first-i ] = cnt;
                }
                else
                    break;
            }
            
            for(int i=1; i<map.size(); ++i) {
                
                if( map.find(it->first+i ) != map.end()) {
                    cnt++;
                    map[ it->first+i ] = cnt;
                }
                else
                    break;
            }
            
            res = max(res, cnt);
            
            it++;
        }
        

        
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
    
    
    longestConsecutive(vec);
    
    return 0; 
}

