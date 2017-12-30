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

    
    void dfs(vector< string > &hash, string &digits, vector<string> &res, string s, int dept) {
        
        if(dept>=digits.size()) {
            res.push_back(s); 
            return; 
        }
        
        int key = digits[dept]-'0'; 
        for(int i=0; i<hash[key].size(); i++) {
            
            s += (hash[key][i]); 
            dfs(hash, digits, res, s, dept+1); 
            s.pop_back(); 
            
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.size()<1)
            return vector<string>(); 
        
        vector<string> res; 
        vector< string > hash(10);
        hash[2] = "abc"; 
        hash[3] = "def"; 
        hash[4] = "ghi"; 
        hash[5] = "jkl"; 
        hash[6] = "mno"; 
        hash[7] = "pqrs"; 
        hash[8] = "tuv"; 
        hash[9] = "wxyz"; 
        hash[0] = " "; 
        
        
        dfs(hash, digits, res, "", 0); 
        
        
        return res;
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    char a[1000]; 
    scanf("%s", a); 
    
    string s = string(a); 
    vector<string> res; 
    res = letterCombinations(s); 
    
    for(int i=0; i<res.size(); i++) {
        printf("%s\n", res[i].c_str()); 
    }
    
    return 0; 
}

