
/*

674. Longest Continuous Increasing Subsequence

https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/

Given an unsorted array of integers, find the length of longest continuous increasing subsequence.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int findLengthOfLCIS(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        int res = 0;
        int cnt=1; 
        for(size_t i=1; i<nums.size(); i++) {
            
            if( nums[i-1] < nums[i])
                cnt++;
            else {
                res = max(res, cnt);
                cnt = 1;
            }
            
//            printf("%d, %d %d\n", cnt, nums[i-1], nums[i]);
        }
        
        res = max(res, cnt);
        
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
    findLengthOfLCIS(nums);
    
    return 0; 
}


