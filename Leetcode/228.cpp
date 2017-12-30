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

    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> res; 
        int l=0; 
        char str[100]; 
        
        for(int i=1; i<nums.size(); ++i) {
            
            if(nums[i]-nums[i-1]!=1) {
                
                if(i-l-1>0){
                    sprintf(str, "%d->%d", nums[l], nums[i-1]); 
                    res.push_back(str); 
                }
                else {
                    sprintf(str, "%d", nums[l]); 
                    res.push_back(string(str));
                }
                
                l = i;
            }
            
        }
        
        if(l == nums.size()-1){
            sprintf(str, "%d", nums[l]); 
            res.push_back(string(str));
        }
        else {
            sprintf(str, "%d->%d", nums[l], nums[nums.size()-1]); 
            res.push_back(str); 
        }
            
        
        for(int i=0; i<res.size(); i++)
            printf("%s\n", res[i].c_str()); 
        
        
        return res; 
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
    
    summaryRanges(vec); 
    
    
    return 0; 
}
