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

    int romanToInt(string s) {
        
        int dict[129]; 
        int res; 
        int i; 
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D'] = 500;
        dict['M'] = 1000;
        
        res = 0;
        i = 0;
        while(i<s.size()) {
            
            if(i+1<s.size() && dict[s[i]]<dict[s[i+1]]){
                res += dict[s[i+1]] - dict[s[i]]; 
                i+=2;
                
            }
            else{
                res += dict[s[i]];
                i+=1;
            }
            
        }
        
        return res; 
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    string s;
    char dict[100];
    scanf("%s", dict);
    
    s = string(dict);
    int res = romanToInt(s); 
    printf("%d\n", res); 
    
    return 0; 
}

