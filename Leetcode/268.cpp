/*

268. Missing Number

https://leetcode.com/problems/missing-number/description/

Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.

Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int missingNumber(vector<int>& nums) {
        
        int res;
        
        nums.push_back(0);
        int len = nums.size(); 
        for(int i=0; i<len; i++){
            nums[i]++;
        }
        
        for(int i=0; i<len; i++){
            if(nums[ abs(nums[i])-1 ]>0)
                nums[ abs(nums[i])-1 ] = -nums[ abs(nums[i])-1 ];
        }
        
        res = 0;
        for(int i=0; i<len; i++){
//            printf("%d\n", nums[i]);
            if(nums[i]>0)
                res = i;
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
    int a; 
    scanf("%d", &n);
    
    vector<int> nums;
    for(int i=0; i<n; i++) {
        scanf("%d", &a);
        nums.push_back(a);
    }
    missingNumber(nums);
            
    
    return 0; 
}

