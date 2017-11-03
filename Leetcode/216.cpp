/*

216. Combination Sum III

https://leetcode.com/problems/combination-sum-iii/description/

Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;


    void getSumList(int k, int n, int start, vector<int> &v, vector< vector<int> > &res) {
        
        if(k==0 && n==0) {
            res.push_back(v);
            
//            for(int i=0; i<v.size(); i++)
//                printf("%d, ", v[i]);
//            printf("\n");
            
        }
        
        if(k<0 || n<0)
            return;
        
        for(int i=start; i<10 && i<=n; i++) {
            
            v.push_back(i);
            getSumList(k-1, n-i, i+1, v, res);
            v.pop_back();
            
        }    
        
        
    }


    vector< vector<int> > combinationSum3(int k, int n) {
        
        vector<int> v;
        vector< vector<int> > res;
        
        getSumList(k, n, 1, v, res);
        
        return res;
        
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int k, n;
    
    scanf("%d %d", &k, &n);
    combinationSum3(k, n);
    
    
    
    
    
    return 0; 
}