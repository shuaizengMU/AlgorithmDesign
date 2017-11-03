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


    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int l=0; 
        int pro=1;
        int res = 0; 
        for(int i=0; i<nums.size(); i++) {
            pro *= nums[i]; 
            while(pro>=k && l<=i) {
                pro/=nums[l++];
            }
            res += i-l+1;
            
//            printf("%d %d\n", res, pro); 
        }
        
//        printf("%d\n", res); 
        
        return res; 
        
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
    
    numSubarrayProductLessThanK(vec, k); 
    
    
    return 0; 
}

