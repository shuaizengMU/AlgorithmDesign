/*
628. Maximum Product of Three Numbers

https://leetcode.com/problems/maximum-product-of-three-numbers/description/

Given an integer array, find three numbers whose product is maximum and output the maximum product.

*/


#include <bits/stdc++.h>


using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    int maximumProduct(vector<int>& nums) {
        
        int a[3];
        int b[3];
        int maxi, mini; 
        int res;
        
        a[0] = a[1] = a[2] = -INF;
        b[0] = b[1] = b[2] = INF;
        
    
        for(int i=0; i<nums.size(); i++) {
            maxi = nums[i];
            if(a[0]<maxi) 
                swap(a[0], maxi);
            if(a[1]<maxi) 
                swap(a[1], maxi);
            if(a[2]<maxi)
                swap(a[2], maxi);

            mini = nums[i];
            if(b[0]>mini) 
                swap(b[0], mini);
            if(b[1]>mini) 
                swap(b[1], mini);
        }
        
//        printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], b[0], b[1]);
        if( a[0]*a[1]*a[2] > a[0]*b[0]*b[1])
            res = a[0]*a[1]*a[2];
        else
            res = a[0]*b[0]*b[1];

//        printf("%d\n", res);
        
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
    
    
    maximumProduct(nums);
    
    return 0; 
}

