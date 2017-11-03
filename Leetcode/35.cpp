/*

35. Search Insert Position

https://leetcode.com/problems/search-insert-position/description/


Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0


*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int searchInsert(vector<int>& nums, int target) {
        
        int l=0,r=nums.size()-1,mid; 
        int res=-1;
        
        while(l<=r) {
            mid = l+(r-l)/2;
            if(nums[mid]<target) 
                l = mid+1;
            else if(nums[mid]>target)
                r = mid-1;
            else {
                res = mid;
                break;
            }
                
        }
        if(res == -1)
            res = l;
        
        printf("%d", res); 
        return res;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    
    int n, t; 
    scanf("%d %d", &n, &t);
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    
    searchInsert(nums, t);
    
    
    
    return 0; 
}

