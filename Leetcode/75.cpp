/*

template

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    void sortColors(vector<int>& nums) {
        
        int l=0, r=nums.size()-1;
        
        while(l<nums.size() && nums[l]==0)
            l++;
        while(r>=0 && nums[r]==2)
            r--;
        
        int i=l; 
        while(i<=r&&l<r) {
            
            i = max(i, l);
            
            if(nums[i]==2)
                swap(nums[i], nums[r]);
            else if(nums[i]==0)
                swap(nums[i], nums[l]); 
            else 
                i++;
            
            while(l<nums.size() && nums[l]==0)
                l++;
            while(r>=0 && nums[r]==2)
                r--;
            
        }
        
        for(int i=0; i<nums.size(); i++) {
            printf("%d ", nums[i]); 
        }
        printf("\n"); 
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    vector<int> nums(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    sortColors(nums); 
    
    return 0; 
}

