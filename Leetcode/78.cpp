/*

78. Subsets

https://leetcode.com/problems/subsets/description/

Given a set of distinct integers, nums, return all possible subsets.

Note: The solution set must not contain duplicate subsets.

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    void getSub(vector<int> &nums, vector< vector<int> > &res, vector<int> &tmp, int k, int idx) {
        
        if(k==0) {
            res.push_back(tmp);
//            for(int i=0; i<tmp.size(); i++) {
//                printf("%d, ", tmp[i]);
//            }
//            printf("\n");
        }
            
        
        for(int i=idx; i<nums.size(); i++) {
            tmp.push_back( nums[i] );
            k--;
            getSub(nums, res, tmp, k, i+1);
            k++;
            tmp.pop_back();
            
        }
        
    } 

    vector< vector<int> > subsets(vector<int>& nums) {
        
        vector< vector<int> > res;
        vector<int> tmp;
        
        res.push_back( vector<int>() );
        res.push_back(nums);
        
        for(int i=nums.size()-1; i>0; i--) {
            getSub(nums, res, tmp, i, 0);
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
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    subsets(nums);
    
    
    
    return 0; 
}

