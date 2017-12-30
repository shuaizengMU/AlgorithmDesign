/*

template

*/


#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;



   int lengthOfLongestSubstring(string s) {
        
       int nums[129];
       int l;
       int res; 
       
       memset(nums, -1, sizeof(nums));
       l = -1;
       res = 0;
       for(int i=0; i<s.size(); i++) {
           
           if(nums[s[i]] > l) 
               l = nums[s[i]];
           nums[s[i]] = i;
           res = max(res, i-l);
       }
//       printf("%d\n", res); 
       return res;
       
       
   }

    int lengthOfLongestSubstring2(string s) {
        
        int num[129];
        int idx;
        int l;
        int res;
        
        memset(num, 0, sizeof(num)); 
        
        res = 0;
        l = 0;
        for(int i=0; i<s.length(); i++) {
            
            idx = s[i];
            num[idx]++;
            
            if(num[idx]>1) {
                
                while(l<i) {
                    num[s[l]]--;
                    if(s[i] == s[l++])
                        break;
                }
            }
            
            res = max(res, i-l+1);
            printf("%d %d, %d\n", l, i, res);
        }
        
        return res; 
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    string s;
    char ch[10000];
    scanf("%s", ch);
    s = string(ch);
    
    printf("%s\n", s.c_str());
    
    lengthOfLongestSubstring(s);
    
    
    return 0; 
}

