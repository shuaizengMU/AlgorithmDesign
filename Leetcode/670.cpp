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

    int maximumSwap(int num) {
        
        int n;
        int nums[10]; 
        int idxs[10]; 
        
        char a[10];
        n = sprintf(a, "%d", num);
        
        memset(nums, 0, sizeof(nums)); 
        memset(idxs, -1, sizeof(idxs));
        
        int idx;
        for(int i=0; i<n; i++) {
            idx = a[i]-'0';
            nums[idx]++;
            idxs[idx] = i;
        }
        
        vector<int> vec;
        for(int i=9; i>=0; i--)
            if(nums[i]>0)
                vec.push_back(i);
        
        int vec_idx = 0;
        int cnt = vec[vec_idx];
        for(int i=0; i<n; i++) {
            
            idx = a[i]-'0';

            
            if(idx==cnt){
                nums[idx]--;
                if(nums[idx]==0) {
                    vec_idx++;
                    cnt = vec[vec_idx];
                    continue;
                }
            }
            else{
                swap(a[i], a[ idxs[cnt] ]);
                break;
            }
            
        }
        
        for(int i=0; i<n; i++)
            printf("%d ", a[i]-'0'); 
        printf("\n"); 
        
        
        return atoi(a);
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    maximumSwap(n); 
    
    return 0; 
}

