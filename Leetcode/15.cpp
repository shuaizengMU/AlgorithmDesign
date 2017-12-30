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

    vector< vector<int> > threeSum(vector<int>& nums) {
        
        if(nums.size() < 3)
            return vector< vector<int> >();
        
        sort(nums.begin(), nums.end()); 
        
        int sum; 
        int l, r; 
        vector< vector<int> > res; 
        
        for(int i=0; i<nums.size(); ++i) {
            
            l = i+1; 
            r = nums.size()-1; 
            while(l<r) {
                
                sum = nums[i] + nums[l] + nums[r]; 
                if(sum < 0) {
                    ++l;
                }
                else if(sum > 0) {
                    --r;
                }
                else{
                    
                    
                    res.push_back({nums[i], nums[l], nums[r]}); 
                    
                    while(l<r && nums[l]==nums[l+1])
                        ++l;
                    
                    while(l<r && nums[r-1]==nums[r])
                        --r;
                    
                    ++l, --r;
                }
            }
            
            while(i<nums.size() && nums[i] == nums[i+1])
                i++; 
            
        }
        
        return res; 
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    vector< vector<int> > res; 
    scanf("%d", &n); 
    
    vector<int> vec(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    
    res = threeSum(vec); 
    
    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[0].size(); j++)
            printf("%d ", res[i][j]); 
        printf("\n"); 
    }
    
    return 0; 
}

