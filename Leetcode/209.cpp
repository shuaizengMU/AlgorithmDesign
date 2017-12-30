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


    int minSubArrayLen(int s, vector<int>& nums) {
        
        
        int sum = 0; 
        int res = 0; 
        int res_len = nums.size()+1; 
        int l = 0;
        
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[i] >= s)
                return 1;
            
            sum += nums[i]; 
            while(sum>=s && l<i) {
                
                if(res_len>i-l+1) 
                    res_len = i-l+1; 
                
                sum -= nums[l++]; 
                
                printf("= %d %d %d\n", res_len, i, l);
            }
        }
        
        printf("%d\n", res_len);
        
        return res_len==nums.size()+1 ? 0:res_len; 
        
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
    
    minSubArrayLen(t, vec); 
    
    return 0; 
}
