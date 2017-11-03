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


    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res(2); 
        unordered_map<int,int> map; 
        
        for(int i=0; i<nums.size(); i++) {
            
            if(map.find( target-nums[i] ) != map.end()) {
                res[0] = map[ target-nums[i] ]; 
                res[1] = i; 
                break;
            }
            
//            printf("%d\n", nums[i]); 
            map[ nums[i] ] = i;
        }
        
        printf("%d %d\n", res[0], res[1]);
        return res; 
        
    }


    vector<int> twoSum_slow(vector<int>& nums, int target) {
        
        vector<int> res(2); 
        
        for(int i=0; i<nums.size()-1; i++) 
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j] == target)
                    res[0]=i, res[1]=j;
            }
        
        printf("%d %d\n", res[0], res[1]);
        return res; 
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, t; 
    scanf("%d %d", &n, &t); 
    vector<int> nums(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    
    twoSum(nums, t);
    
    
    return 0; 
}

