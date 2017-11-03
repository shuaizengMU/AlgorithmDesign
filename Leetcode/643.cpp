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

    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double res; 
        
        for(int i=0; i<k; ++i)
            avg += nums[i];

        res = avg;
        for(int i=k; i<nums.size(); ++i) {
            
            avg += nums[i]-nums[i-k];
            res = max( res, avg);

        }
        
        return res/k;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, k; 
    scanf("%d %d", &n, &k); 
    vector<int> vec(n);
    for(int i=0; i<n; i++)
        scanf("%d", &vec[i]);
    
    
    findMaxAverage(vec, k);
    
    return 0; 
}

