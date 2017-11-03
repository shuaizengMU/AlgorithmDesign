/*

 
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
167. Two Sum II - Input array is sorted


Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

   vector<int> twoSum(vector<int>& numbers, int target) {
       
       vector<int> vec;
       vector<int> res;
       
       int val = 0;
       int len = numbers.size();
       
       int l,r, mid; 
       for(int i=0; i<numbers.size(); i++) {
           val = target - numbers[i];
           
           l = i+1;
           r = len;
           
//           printf("i: %d\n", i);
           while(l<=r){
               mid = (l+r)/2;
               
//               printf("nb: %d\n", numbers[mid] );
               
               if(numbers[mid] == val) {
                   
                   res.push_back(i+1);
                   res.push_back(mid+1);
                   
                   break;
               }
               
               if(numbers[mid]<val)
                   l = mid+1;
               else if(numbers[mid]>val)
                   r = mid-1;
               
           }
           
           if(res.size()>0)
               break;
           
       }
       
//       printf("%d %d\n", res[0], res[1]);
       
       return res;
       
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    int target; 
    scanf("%d %d", &n, &target);
    
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    
    twoSum(nums, target);
    
    return 0; 
}