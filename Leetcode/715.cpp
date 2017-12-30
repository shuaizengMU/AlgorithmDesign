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

class RangeModule {
public:
    
    unordered_map map;
    vector< vector<int> > matrix;
    
    RangeModule() {
        
    }
    
    void addRange(int left, int right) {
        
        int l; 
        for(int i=0; i<matrix.size(); i++)
            if(left<=matrix[i][0])
                l = i;
        
        
        if(left<=matrix[l][0] && right<=matrix[l][1]) {
            
            
            return;
        }
                
        
        
        for(int i=l+1; i<matrix.size(); i++) {
            
            
            
            if()
            
        }
        
    }
    
    bool queryRange(int left, int right) {
        
        
        int l=0; r=matrix.size(); 
        int mid; 
        while(l<=r) {
            
            mid = l+((r-l)>>1); 
            if(matrix[mid][0]<=left && right<=matrix[mid][1])
                return true; 
            else if(matrix[mid][0] < left)
                l = mid+1;
            else
                r = mid-1;
        }
        
        return false;
    }
    
    void removeRange(int left, int right) {
        
    }
};

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    
    RangeModule obj = new RangeModule();
    obj.addRange(left,right);
    bool param_2 = obj.queryRange(left,right);
    obj.removeRange(left,right);
    
    
    return 0; 
}
