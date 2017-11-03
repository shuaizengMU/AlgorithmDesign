/*

122. Best Time to Buy and Sell Stock II

https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int maxProfit(vector<int>& prices) {
        
        if(prices.size()==0)
            return 0;
        
        int cnt=0;
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i] < prices[i+1])
                cnt += prices[i+1] - prices[i];
        }
        
//        printf("%d", cnt);
        return cnt;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n);
    
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    
    maxProfit(nums);
    
    return 0; 
}