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

    int strStr(string haystack, string needle) {
        
        if(haystack.empty() && needle.empty())
            return 0;
        
        if(haystack.size() < needle.size())
            return -1;
        
        int j;
        int size = haystack.size() - needle.size() + 1;
        
        for(int i=0; i<size; i++) {
            
        
            j=0;
            for(; j<needle.size(); j++) {
                if(haystack[i+j] != needle[j])
                    break;
            }
            
            if(j == needle.size())
                    return i; 
           
        }
        
        return -1;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    char a[1000], b[1000]; 
    
    scanf("%s", a); 
    scanf("%s", b); 
    
    string s1(a);
    string s2(b);
    
    printf("- %s %s\n", s1.c_str(), s2.c_str()); 
    
    int res = strStr(s1, s2); 
    printf("%d\n", res); 
    
    return 0; 
}

