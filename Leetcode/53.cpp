/*

53. Maximum Subarray
https://leetcode.com/problems/maximum-subarray/description/

Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int maxSubArray(vector<int>& nums) {
        
        
        int mx_cur=0, mx_sofar=0;
        int mx=nums[0]<-INF ? nums[0]:-INF;
        for(int i=0; i<nums.size(); ++i) {
            mx = MAX(mx, nums[i]);
            mx_cur = MAX(0, mx_cur+nums[i]); 
            mx_sofar = MAX(mx_sofar, mx_cur);
//            printf("%d\n", mx_sofar);    
        }
        
//        printf("%d %d\n", mx, mx_sofar);
        
        if(mx<0)
            return mx;
        else
            return mx_sofar;
        
        
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
    
    maxSubArray(nums);
    
    
    return 0; 
}

