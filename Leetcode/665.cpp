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


    bool checkPossibility(vector<int>& nums) {
        
        int t=0; 
        int l, r;
        int idx;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]){
                
                l = r = 0;
                for(int idx=i-1; idx>=0; --idx) {
                    if(nums[idx]>nums[i])
                        l++;
                    else
                        break;
                }
                    
                for(int idx=i; idx<nums.size(); ++idx) {
                    if(nums[i-1]>nums[idx])
                        r++;
                    else
                        break;
                }
                
                t += min(l,r);
            }
            
            if(t>1)
                return false;
            
        }
        
        return true;
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
    
    int res = checkPossibility(vec); 
    printf("%d\n", res); 
    
    return 0; 
}

