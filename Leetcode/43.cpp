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

    string multiply(string num1, string num2) {
        
        if(num1[0]=='0' || num2[0]=='0')
            return "0"; 
        
        string tmp;
        if(num1.size()<num2.size()) {
            tmp = num1;
            num1 = num2;
            num1 = tmp;
        }
        
//        int n=0; 
//        while(n<num1.size())
//            if(num1[n++]!='0')
//                break;
//        if(n==num1.size())
//            return "0"; 
//        
//        n = 0;
//        while(n<num2.size())
//            if(num2[n++]!='0')
//                break;
//        if(n==num2.size())
//            return "0"; 
        
        
        int m;
        int n1 = num1.size()-1; 
        int n2 = num2.size()-1; 
        int n3 = num1.size() + num2.size(); 
        
        int res[200]; 
        int maxlen = -1; 
        memset(res, 0, sizeof(res)); 
        
        for(int i=0; i<num2.size(); i++) {
            
            for(int j=0; j<num1.size(); j++) {
                
                m = (num1[n1-j]-'0') * (num2[n2-i]-'0') + res[j+i];
                
                res[j+i] = m%10;
                res[j+i+1] += m/10;
                
            }
            
        }
        
        string f=""; 
        for(int i=n3; i>=0; i--) {
            if(f.size()<1 && res[i]==0)
                continue;
            f += to_string(res[i]); 
        }
        
        return f; 
        
        
    }


int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    char a[200], b[200]; 
    
    scanf("%s", a); 
    scanf("%s", b); 
    
    string s1(a), s2(b); 
    
    string res = multiply(s1, s2); 
    printf("%s\n", res.c_str()); 
    
    
    return 0; 
}

