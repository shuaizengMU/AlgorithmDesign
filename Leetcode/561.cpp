/*

Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


int arrayPairSum(vector<int>& nums) {
    
    sort(nums.begin(), nums.end()); 
    
    int cnt = 0; 
    for(int i=0; i<nums.size()/2; i++) {
        cnt += nums[i*2]; 
    }
        
    return cnt;
}



int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    vector<int> nums; 
    int a; 
    while(~scanf("%d", &a)){
        nums.push_back(a); 
    }
    
    int res = arrayPairSum(nums); 
    printf("%d\n", res); 
    
    
    return 0; 
}