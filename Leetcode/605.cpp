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

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        

        int res = 0; 
        int cnt = 0;
        int flag = 0;
        for(int i=0; i<flowerbed.size(); ++i) {
            
            if(flowerbed[i]==1)
                if(flag == 1)
                    flowerbed[i-1] = 1;
                else 
                    flag = 1;
            
        }
        
//        for(int i=0; i<flowerbed.size(); i++) {
//            printf("%d ", flowerbed[i]); 
//        }
//        printf("\n"); 
        
        
        for(int i=0; i<flowerbed.size(); ++i) {
            if(flowerbed[i]==0)
                cnt++;
            else {
                
                res += cnt>>1;
                cnt=0;
            }
        }
        if(cnt == flowerbed.size())
            res += (cnt+1)>>1;
        else
            res += cnt>>1;
        
        
//        printf("%d %d\n", res, n); 
        
        if(res >= n)
            return true; 
        else
            return false; 
        
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
    
    canPlaceFlowers(vec, t); 
    
    return 0; 
}
