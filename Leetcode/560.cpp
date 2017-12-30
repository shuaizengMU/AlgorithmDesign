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

    int subarraySum(vector<int>& nums, int k) {
        
        if(nums.empty())
            return 0; 
        
        unordered_map<int, int> hash;
        
        int cnt, res; 
        cnt = 0; 
        res = 0;
        
        hash[0]++;
        for(int i=0; i<nums.size(); i++) {
            
            cnt += nums[i]; 
            if(hash.find(cnt-k) != hash.end())
                res += hash[cnt-k];
            hash[cnt]++;
        }
        
        printf("%d\n", res); 
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
    
    subarraySum(vec, t); 
    
    
    return 0; 
}

