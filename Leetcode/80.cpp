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
        
        unordered_map<int, int> map;
        
        int i=0; 
        int idx;
        while(i<nums.size()) {
            
            idx = nums[i]; 
            if( map.find( idx )==map.end()) {
                map[idx]=1;
            }
            else if(map[idx]<2)
                map[idx]++;
            else{
                nums.erase(nums.begin() + i);
                continue; 
            }
            
            i++;
            
        }
        
        for(int i=0; i<nums.size(); i++)
            printf("%d ", nums[i]); 
        printf("\n%d\n", nums.size()); 
        
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

