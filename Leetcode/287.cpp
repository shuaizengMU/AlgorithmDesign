/*

287. Find the Duplicate Number

https://leetcode.com/problems/find-the-duplicate-number/description/

Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

Note:
You must not modify the array (assume the array is read only).
You must use only constant, O(1) extra space.
Your runtime complexity should be less than O(n2).
There is only one duplicate number in the array, but it could be repeated more than once.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int findDuplicate(vector<int>& nums) {
        
        int h[1000000];
        int res; 
        memset(h, 0, sizeof(h));
        for(int i=0; i<nums.size(); i++) {
            h[ nums[i] ]++;
            if(h[ nums[i] ]>1){
                res = nums[i];
                break;
            }
                
        }
        
//        printf("%d\n", res);
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
    
    findDuplicate(nums);
    
    return 0; 
}

