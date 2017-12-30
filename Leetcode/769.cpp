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

    int minCostClimbingStairs(vector<int>& cost) {
        
        int L = cost.size(); 
        if(L<=2)
            return min(cost[0], cost[1]);
        
        for(int i=2; i<L; ++i) {
            cost[i] += min(cost[i-2], cost[i-1]);
        }
        
        printf("%d\n", min(cost[L-1], cost[L-2])); 
        return min(cost[L-1], cost[L-2]); 
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
    minCostClimbingStairs(vec); 
    
    
    
    return 0; 
}

