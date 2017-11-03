/*

https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/\

448. Find All Numbers Disappeared in an Array

Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int idx_i, idx_j;
        int len = nums.size();
        vector<int> res;
        for(int i=0; i<nums.size(); i++) {
            
            if(i<len-i-1) {
                if(nums[ abs(nums[i])-1 ] > 0)
                    nums[ abs(nums[i])-1 ] = -nums[ abs(nums[i])-1 ];
                if(nums[ abs(nums[len-i-1])-1 ] >0)
                    nums[ abs(nums[len-i-1])-1 ] = -nums[ abs(nums[len-i-1])-1 ];
            }
            else if(i == len-i-1){
                if(nums[ abs(nums[i])-1 ] > 0)
                    nums[ abs(nums[i])-1 ] = -nums[ abs(nums[i])-1 ];
                
                if(nums[ i ] > 0)
                    res.push_back( i+1 );
            }
            else {
                if(nums[ i ] > 0)
                    res.push_back( i+1 );
                if(nums[ len-i-1 ] >0)
                    res.push_back( len-i );
                    
            }
            
            
        }
        
//        for(int i=0; i<res.size(); i++){
//            printf("%d, ", res[i]);
//        }
        
        return res;
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
    
    findDisappearedNumbers(nums);
    
    
    return 0; 
}