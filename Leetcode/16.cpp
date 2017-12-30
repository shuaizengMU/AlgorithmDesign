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

    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end()); 
        
        int res = nums[0] + nums[1] + nums[2]; 
        int j, k; 
        int sum; 
        
        for(int i=0; i<=nums.size()-3; i++) {
            
            j = i+1; 
            k = nums.size()-1;
            while(j<k) {                
                sum = nums[i] + nums[j] + nums[k]; 
                if(sum==target)
                    return sum;
                res = abs(sum-target)<abs(res-target) ? sum:res;
                j += sum<target ? 1:0;
                k += sum>=target ? -1:0;
            }
        }
        
        printf("%d\n", res);
        return res; 
        
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
    
    threeSumClosest(vec, t); 
    
    
    return 0; 
}

