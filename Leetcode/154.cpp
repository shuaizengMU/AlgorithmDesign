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

    int findMin(vector<int>& nums) {
        
        int nmin = 100000;
        
        for(int i=0; i<nums.size(); i++)
            nmin = min(nmin, nums[i]);
        
        return nmin; 
        
        
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
    
    findMin(nums); 
    
    return 0; 
}

