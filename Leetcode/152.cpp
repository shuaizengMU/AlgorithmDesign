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


    int maxProduct(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0]; 
        
        int maxi_pre, mini_pre, maxi, mini, T; 
        maxi_pre = nums[0]; 
        mini_pre = nums[0]; 
        T = nums[0]; 
        
        for(int i=1; i<nums.size(); i++) {
            
            maxi = max(max(maxi_pre*nums[i], mini_pre*nums[i]), nums[i]); 
            mini = min(min(maxi_pre*nums[i], mini_pre*nums[i]), nums[i]); 
            T = max(maxi, T); 
            
            maxi_pre = maxi;
            mini_pre = mini; 
            
//            printf("%d %d\n", maxi, mini); 
            
        }
        
//        printf("%d\n", T); 
        return T; 
        
        
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
    
    
    maxProduct(vec); 
    
    
    return 0; 
}

