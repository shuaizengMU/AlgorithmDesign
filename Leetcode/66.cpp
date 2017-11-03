/*

template

*/


#include <bits/stdc++.h>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    vector<int> plusOne(vector<int>& digits) {
        
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]+1==10)
                digits[i] = 0;
            else {
                digits[i] += 1;

                
                return digits; 
            }
        }
        
        digits.insert(digits.begin(), 1); 
        
        
        for(int i=0; i<digits.size(); i++)
            printf("%d", digits[i]); 
        printf("\n"); 
        
        return digits; 
        
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int n; 
    scanf("%d", &n); 
    
    vector<int> digits(n, 0);
    for(int i=0; i<n; i++)
        scanf("%d", &digits[i]); 
    
    plusOne(digits);
    
    return 0; 
}

