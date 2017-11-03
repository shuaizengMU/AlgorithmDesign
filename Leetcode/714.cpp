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

    int maxProfit(vector<int>& prices, int fee) {
        
        int s0=0, s1=-prices[0]; 
        for(int i=1; i<prices.size(); i++) {
            int p = prices[i];
            s0 = max(s0, s1+p-fee);
            s1 = max(s1, s0-p);
        }
        
//        printf("%d\n", s0); 
        return s0;
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, fee;
    scanf("%d %d", &n, &fee); 
    vector<int> vec(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]); 
    maxProfit(vec, fee); 
    
    return 0; 
}

