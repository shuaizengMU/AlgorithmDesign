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

    bool isValid(string s) {
        
        int hash[300]; 
        memset(hash, -1, sizeof(hash)); 
        hash[']'] = '[';
        hash['}'] = '{'; 
        hash[')'] = '('; 
        
        vector<char> q;
        for(int i=0; i<s.size(); i++) {
            
            
            if(!q.empty() && q.back()==hash[s[i]]) {
                q.pop_back(); 
            }
            else {
                q.push_back(s[i]); 
            }
            
        }
        
        
        if(q.empty())
            return true; 
        
        return false; 
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    char a[10000]; 
    scanf("%s", a); 
    
    string s(a); 
    
    int res = isValid(s); 
    printf("%d\n", res); 
    
    
    return 0; 
}

