/*

27. Remove Element

https://leetcode.com/problems/remove-element/description/


Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int removeElement(vector<int>& nums, int val) {

        int r = nums.size()-1;
        
        for(int i=0; i<nums.size(); ++i)  {
            while(nums[r]==val)
                --r;
            if(i<r && nums[i] == val)
                swap(nums[i], nums[r]);
            else if(i>=r)
                break;
        }
        
        nums.erase(nums.begin()+r+1, nums.end());
//        for(int i=0; i<nums.size(); i++)
//            printf("%d, %d\n", nums[i], r);
            
        return nums.size();
        
        
    }



int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, val; 
    scanf("%d %d", &n, &val);
    vector<int> nums(n);
    for(int i=0; i<n; ++i) {
        scanf("%d", &nums[i]); 
    }
    removeElement(nums, val); 
    
    return 0; 
}

