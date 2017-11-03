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


    bool searchMatrix(vector< vector<int> >& matrix, int target) {
        
        if(matrix.empty())
            return false;
        
        int m = matrix.size(); 
        int n = matrix[0].size(); 
        int mn = m*n-1;
        int l=0, r = mn; 
        int mid; 
        int i, j;
        
        while(l<=r) {
            
            mid = l+(r-l)/2;
            i = mid/n; 
            j = mid%n;
//            printf("%d %d %d %d %d\n", mid, i, j, matrix[i][j], target); 
            if(matrix[i][j] == target) {
                printf("%d %d %d %d\n", mid, i, j, target); 
                return true; 
            }
            else if(matrix[i][j] < target)
                l = mid+1;
            else
                r = mid-1;
        }
        
        return false;
        
    }

    bool searchMatrix_slow(vector< vector<int> >& matrix, int target) {
        
        if(matrix.empty())
            return false;
        
        int up=0, down=matrix.size()-1;
        int last = matrix[0].size()-1; 
        int mid; 
        
        while(up<down) {
            
            
            
            mid = up+(down-up)/2;
            
            if(matrix[mid][0] <= target && target <= matrix[mid][last]){
                up = mid;
                break;
            }
            else if(matrix[mid][last] < target)
                up = mid+1;
            else if(matrix[mid][0] > target)
                down = mid-1;
//            printf("%d %d %d\n", up, down, mid); 
//            break;
        }
        
        int idx = up;
        int l=0, r=last;
        
        printf("%d\n", idx); 
        while(l<=r) {
            
            mid = l+(r-l)/2;
            
            if( matrix[idx][mid] < target)
                l = mid+1;
            else if(matrix[idx][mid] > target)
                r = mid-1;
            else {
                printf("%d %d %d %d %d\n", idx, r, l, mid, matrix[idx][mid]); 
                return true;
            }
            
        }

        
        return false;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int m, n, t; 
    
    scanf("%d %d %d", &m, &n, &t); 
    vector< vector<int> > vec(m, vector<int>(n) ); 
    
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &vec[i][j]);
    
    
    searchMatrix(vec, t);
    
    
    
    return 0; 
}

