/*

39. Combination Sum
https://leetcode.com/problems/combination-sum/description/

Given a set of candidate numbers (C) (without duplicates) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

The same repeated number may be chosen from C unlimited number of times.

Note:
All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
For example, given candidate set [2, 3, 6, 7] and target 7, 
A solution set is: 
[
  [7],
  [2, 2, 3]
]

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    void combination(vector< vector<int> > &res, vector<int> &candidates, vector<int> &c, int target, int idx) {
        
        if(target==0){
            res.push_back(c);
            
//            for(int i=0; i<c.size(); i++)
//                printf("%d, ", c[i]); 
//            printf("\n");
            
            return;
        }

        for(int i=idx; i<candidates.size() && candidates[i]<=target; ++i) {
            c.push_back(candidates[i]);
            combination(res, candidates, c, target-candidates[i], i);
            c.pop_back();
        }
            
    }


    vector< vector<int> > combinationSum(vector<int>& candidates, int target) {
        
        vector< vector<int> > res; 
        vector<int> c;
        
        sort(candidates.begin(), candidates.end());
        combination(res, candidates, c, target, 0);
        
        return res;
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n, t; 
    scanf("%d %d", &n, &t); 
    vector<int> nums(n); 
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    combinationSum(nums, t);
    
    return 0; 
}

