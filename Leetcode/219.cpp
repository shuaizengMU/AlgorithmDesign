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

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++) {
            if( map.find(nums[i]) != map.end() && i-map[nums[i]] <= k) {
                return true;
            }
            map[nums[i]] = i;
        }
        
        printf("0"); 
        return false;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, k; 
    scanf("%d %d", &n, &k); 
    vector<int> vec(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    
    containsNearbyDuplicate(vec, k); 
    
    
    return 0; 
}

