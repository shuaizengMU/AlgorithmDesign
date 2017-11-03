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

    bool search(vector<int>& nums, int target) {
        
        for(int i=0; i<nums.size(); i++)
            if(target == nums[i])
                return true; 
        return false;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d %d", &n, &target); 
    vector<int> vec(n);
    
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    
    search(vec, target); 
    
    return 0; 
}

