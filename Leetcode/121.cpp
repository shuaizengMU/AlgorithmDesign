/*

121. Best Time to Buy and Sell Stock

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    int maxProfit(vector<int>& prices) {
        
        int res;
        int mx=0;
        int mx_sofar=0;
        
        for(int i=1; i<prices.size(); i++) {
            
            mx += prices[i] - prices[i-1];
            mx = MAX(0, mx);
            mx_sofar = MAX(mx_sofar, mx);
        }
        res = mx_sofar;
//        printf("%d\n", res);
        
        return res;
        
    }


    int maxProfit2(vector<int>& prices) {
        
        int mx=-INF;
        int mx_idx=-1;
        int mn=INF;
        int mn_idx=-1;
        int res=0;
        
        for(int i=0; i<prices.size(); i++) {
            
            if(mn>prices[i]) {
                mn = prices[i];
                mn_idx = i;
                
                if(mn_idx>=mx_idx) {
                    mx = -INF;
                    for(int j=i+1; j<prices.size(); j++) {
                        if(mx<prices[j] && mn<prices[j]) {
                            mx = prices[j];
                            mx_idx = j;
                        } 
                    }
                }
                
                res = MAX(res, mx-mn);
//                printf("%d, %d, %d, %d, %d\n", res, mx, mn, mx_idx, mn_idx);
                
            }

        }
        
        return res;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n);
    vector<int> p(n);
    
    for(int i=0; i<n; i++)
        scanf("%d", &p[i]);
    maxProfit(p);
    
    
    return 0; 
}

