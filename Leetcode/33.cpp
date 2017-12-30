/*

template

*/


#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    int search(vector<int>& nums, int target) {
        
        int l,r,mid; 
        l = 0; 
        r = nums.size()-1;
        
        while(l<=r) {
            
            mid = l+(r-l)/2;
            
            if(nums[l]<=target) {
                
                if(nums[mid]<nums[l])
                    r = mid-1;
                else{
                    if(target<nums[mid])
                        r = mid-1;
                    else if(target>nums[mid])
                        l = mid+1;
                    else
                        return mid;
                }
                
            }
            else if(target<=nums[r]) {
                
                if(nums[mid]>nums[r])
                    l = mid+1;
                else{
                    if(target<nums[mid])
                        r = mid-1;
                    else if(target>nums[mid])
                        l = mid+1;
                    else
                        return mid;
                }
            }
            else {
                
                return -1;
                    
            }
        }
        
        
        return -1;
        
    }


    int search2(vector<int>& nums, int target) {
        
        int l,r,mid; 
        l = 0; 
        r = nums.size()-1;
        
        while(l<=r) {
            
            mid = l+(r-l)/2;
            
            if(nums[l]<target) {
                
                if(nums[mid]<nums[l])
                    r = mid-1;
                else{
                    if(target<nums[mid])
                        r = mid-1;
                    else if(target>nums[mid])
                        l = mid+1;
                    else
                        return mid;
                }
                
            }
            else if(target<nums[r]) {
                
                if(nums[mid]>nums[r])
                    l = mid+1;
                else{
                    if(target<nums[mid])
                        r = mid-1;
                    else if(target>nums[mid])
                        l = mid+1;
                    else
                        return mid;
                }
            }
            else {
                if(target == nums[l])
                    return l;
                else if(target == nums[r])
                    return r; 
                else
                    return -1;
                    
            }
        }
        
        
        return -1;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, t; 
    scanf("%d %d", &n, &t); 
    
    vector<int> vec(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    
    int res = search(vec, t); 
    
    printf("%d\n", res); 
    
    
    return 0; 
}

