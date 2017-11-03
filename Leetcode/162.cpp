/*

template

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==1)
            return 0;
        
        if(nums[0]>nums[1])
            return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2])
            return nums.size()-1;
        
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
        }
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    vector<int> vec(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    
    int res = findPeakElement(vec); 
    printf("%d\n", res); 
    
    
    return 0; 
}

