/*

https://leetcode.com/problems/teemo-attacking/description/

495. Teemo Attacking 

In LOL world, there is a hero called Teemo and his attacking can make his enemy Ashe be in poisoned condition. Now, given the Teemo's attacking ascending time series towards Ashe and the poisoning time duration per Teemo's attacking, you need to output the total time that Ashe is in poisoned condition.

You may assume that Teemo attacks at the very beginning of a specific time point, and makes Ashe be in poisoned condition immediately.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        if(timeSeries.size() == 0)
            return 0;
        
//        if(duration == 1)
//            return timeSeries.size();
        
        int cnt=0;
        int nb_gap;
        
        cnt += duration;
        for(int i=0; i<timeSeries.size()-1; i++) {
            
            nb_gap = MIN(timeSeries[i+1]-timeSeries[i], duration);

//            printf("-%d\n", nb_gap);
            cnt += nb_gap;
            
        }
//        printf("%d\n", cnt);
        
   
        
        return cnt;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    
    int n, d; 
    scanf("%d %d", &n, &d);
    
    vector<int> timeSeries(n);
    for(int i=0; i<n; i++) 
        scanf("%d", &timeSeries[i]);
        
    findPoisonedDuration(timeSeries, d);
    
    
    return 0; 
}