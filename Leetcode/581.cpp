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



    int findUnsortedSubarray(vector<int>& nums) {
        
        
        if(nums.size() == 1 || nums.empty())
            return 0;
        
        int l=0, r=nums.size()-1;  
        int min_idx, max_idx; 
        
        while(l<nums.size()-1) {
            if(nums[l]<=nums[l+1])
                l++;
            else
                break;
        }
        
        if(l == nums.size()-1)
            return 0;
        
        while(r>0) {
            if(nums[r-1]<=nums[r])
                r--;
            else
                break;
        }
        
        printf("%d %d %d\n", l, r, r - l + 1); 
        
        
        int min_nb = 99999;
        int max_nb = -99999;
        
        
        for(int i=l; i<=r; i++) {
            min_nb = min(min_nb, nums[i]);
            max_nb = max(max_nb, nums[i]);
        }
        
        printf("%d %d\n", min_nb, max_nb ); 
        
        min_idx = l; 
        for(int i=l-1; i>-1; i--) {
            if(nums[i] > min_nb)
                min_idx--;
            else
                break;
        }
        
        max_idx = r;
        for(int i=r+1; i<nums.size(); i++) {
            if(nums[i] < max_nb)
                max_idx++;
            else
                break;
        }
        
        
        
        printf("%d %d %d\n", min_idx, max_idx, max_idx-min_idx+1); 
        return max_idx-min_idx+1;
        
        
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
    
    findUnsortedSubarray(vec); 
    
    return 0; 
}

