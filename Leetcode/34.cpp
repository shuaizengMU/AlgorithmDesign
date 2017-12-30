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

    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res(2);
        
        int l=0, r=nums.size()-1; 
        int mid; 
        
        while(l<=r) {
            
            mid = l+((r-l)>>2);
            if(nums[mid]<target)
                l = mid+1;
            else
                r = mid-1;
            
        }
        
        res[0] = l; 
        
        l = 0, r=nums.size()-1;
        while(l<=r) {
            
            mid = l+((r-l)>>1);
            if(nums[mid]<=target)
                l = mid+1;
            else
                r = mid-1;
        }
        
        res[1] = l-1;
        
//        printf("%d %d\n", res[0], res[1]); 
        
        if(res[0] > res[1])
            return {-1,-1}; 
        
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
    
    searchRange(vec, t); 
    
    return 0; 
}

