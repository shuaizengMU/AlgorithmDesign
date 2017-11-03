/*

https://leetcode.com/problems/beautiful-arrangement-ii/description/

Beautiful Arrangement II - LeetCode

Given two integers n and k, you need to construct a list which contains n different positive integers ranging from 1 to n and obeys the following requirement: 
Suppose this list is [a1, a2, a3, ... , an], then the list [|a1 - a2|, |a2 - a3|, |a3 - a4|, ... , |an-1 - an|] has exactly k distinct integers.

If there are multiple answers, print any of them.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    vector<int> constructArray(int n, int k) {
        
        int a, b; 
        int i=0; 
        
        vector<int> res;
        
        a = 1;
        b = 1+k-i;
        while(a<=b) {
            if(a == b)
                res.push_back(a);
            else{
                res.push_back(a);
                res.push_back(b);
            }
            
            i++;
            a = 1+i;
            b = 1+k-i;
//            printf("%d-%d, ", a,b);
        }
        
//        for(int i=0; i<res.size(); i++)
//            printf("%d- ", res[i]);
        
        for(int i=k+2; i<=n; i++)
            res.push_back(i);
        
//        for(int i=0; i<res.size(); i++)
//            printf("%d, ", res[i]);
        return res;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, k; 
    scanf("%d %d", &n, &k);
    
    constructArray(n, k);
    
    
    return 0; 
}