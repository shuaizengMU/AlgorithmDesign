/*

611. Valid Triangle Number
https://leetcode.com/problems/valid-triangle-number/description/

Given an array consists of non-negative integers, your task is to count the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int bin_search(vector<int>& nums, int sum, int l) {
        
        int mid;
        int r = nums.size()-1;
        while(l<=r) {
            mid = (l+r)/2;
            if(sum<=nums[mid])
                r = mid-1;
            else
                l = mid+1;
        }
//        printf("- %d %d\n", sum, l);
        return l;
        
    }

    int triangleNumber2(vector<int>& nums) {
        
        int res=0;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                res += bin_search(nums, nums[i]+nums[j], j+1) - 1 - j;
            }
        }
        
        printf("%d\n", res);
        return res;
        
    }


    int triangleNumber(vector<int>& nums) {
        
        int res=0;
        int l, r;
        sort(nums.begin(), nums.end());
        
        for(int i=nums.size()-1; i>=2; i--) {
            
            l = 0;
            r = i-1;
            while(l<=r){
                if(nums[l]+nums[r] > nums[i]){
                    res += r-l;
                    r--;
                }
                else
                    l++;
                    
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
    triangleNumber(nums);
    
    return 0; 
}

