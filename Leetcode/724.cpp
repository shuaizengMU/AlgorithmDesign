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

    int pivotIndex(vector<int>& nums) {
        
        if(nums.size()<3)
            return -1;
        
        int l, r; 
        
        l = 0; 
        r = 0; 
        for(int i=1; i<nums.size(); i++)
            r += nums[i]; 
        
        for(int i=0; i<nums.size()-1; i++) {
            
            if(l == r) {
                return i; 
            }
            l += nums[i];
            r -= nums[i+1];
//            printf("%d %d, %d\n", l, r, i); 
        }
//        printf("%d %d, %d\n", l, r, nums.size()-1); 
        if(l == r)
            return nums.size()-1;
        else
            return -1;
        
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
    
    pivotIndex(vec); 
    
    
    return 0; 
}

