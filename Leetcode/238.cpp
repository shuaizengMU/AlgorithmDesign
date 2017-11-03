/*

https://leetcode.com/problems/product-of-array-except-self/description/

Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Solve it without division and in O(n).

For example, given [1,2,3,4], return [24,12,8,6].

Follow up:
Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;



    vector<int> productExceptSelf(vector<int>& nums) {
        if (nums.size() == 0) 
            return std::vector<int> ();
        
        vector<int> res(nums.size(), 1);
        
        int nb_i = 1;
        int nb_j = 1;
        int len = nums.size(); 
        
        for(int i=0; i<len; i++) {
            
            res[i] *= nb_i;
            res[len-i-1] *= nb_j;
            
            nb_i = nb_i*nums[i];
            nb_j = nb_j*nums[len-i-1];
            
        }
        
//        for(int i=0; i<len; i++) {
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
    int a; 
    scanf("%d", &n); 
    vector<int> nums(n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);   
    }
    
    productExceptSelf(nums);
    
    
    return 0; 
}