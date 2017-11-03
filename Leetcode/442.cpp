/*

Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> res; 
        for(int i=0; i<nums.size(); i++) {
            
            nums[ abs(nums[i])-1 ] = -nums[ abs(nums[i])-1 ];
            if(nums[ abs(nums[i])-1 ] > 0) {
                res.push_back( abs(nums[i]) );
//                printf("%d ", nums[ abs(nums[i])-1 ]);
                
            }
                
            
        }
        
        return res;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    vector<int> nums; 
    vector<int> res; 
    int a; 
    
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a);
        nums.push_back(a);
    }
    
    res = findDuplicates(nums);
    
    
    return 0; 
}