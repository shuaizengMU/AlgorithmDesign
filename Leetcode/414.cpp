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

    int thirdMax(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums[0]; 
        
        if(nums.size()==2)
            return max(nums[0], nums[1]);
        
        int a, b, c; 
        int res; 
        
        sort(nums.begin(), nums.begin()+3);
        
        a = nums[2];
        b = nums[1]; 
        c = nums[0]; 
        
        for(int i=3; i<nums.size(); i++) {
            
            if(a < nums[i]) {
                c = b; 
                b = a; 
                a = nums[i]; 
            }
            else if( (a==b && b>nums[i]) || (b<nums[i] && a!=nums[i])) {
                
                c = b;
                b = nums[i];
            }
            else if( (c==b && c>nums[i]) || (c<nums[i] && a!=nums[i] && b!=nums[i])){
                c = nums[i]; 
            }
            
        }
        
        printf("%d %d %d\n", a, b, c); 
        
        if(a!=b && b!=c)
            return c; 
        else
            return a;

    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    vector<int> vec(n); 
    
    for(int i=0; i<n; i++) {
        scanf("%d", &vec[i]);
    }
    thirdMax(vec); 
    
    
    
    return 0; 
}

