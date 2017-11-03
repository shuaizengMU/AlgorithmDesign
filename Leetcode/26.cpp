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

    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        int res; 
        int l = 0; 
        
        for(int i=0; i<nums.size(); i++) {
            
            if(nums[l]<nums[i])
                nums[++l] = nums[i];
         
            
        }
        
        
        nums.erase(nums.begin()+l+1, nums.end()); 
        for(int i=0; i<nums.size(); i++)
            printf("%d ", nums[i]);
        
        return nums.size(); 
        
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
    
    removeDuplicates(vec); 
    
    
    
    return 0; 
}

