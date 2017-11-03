/*

153. Find Minimum in Rotated Sorted Array

https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

You may assume no duplicate exists in the array.



*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int findMin(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0];
        
        int l=0, r=nums.size()-1;
        int mid;
        
        while(l<r) {
            mid = l+(r-l)/2;
            
//            printf("- %d %d\n", l, r);
            
            if(nums[mid]<nums[r])
                r = mid;
            else if(nums[mid]>=nums[l])
                l = mid+1;
            
        }
//        printf("%d %d\n", l, r);
        return nums[l];
        
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
    findMin(nums);
    
    
    return 0; 
}

