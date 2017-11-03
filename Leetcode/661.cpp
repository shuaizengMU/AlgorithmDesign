/*

661. Image Smoother

https://leetcode.com/problems/image-smoother/description/


Given a 2D integer matrix M representing the gray scale of an image, you need to design a smoother to make the gray scale of each cell becomes the average gray scale (rounding down) of all the 8 surrounding cells and itself. If a cell has less than 8 surrounding cells, then use as many as you can.

*/


#include <bits/stdc++.h>

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

using namespace std;

static const double pi = acos(-1.0);
static const int INF = 0x3f3f3f3f; 
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

    vector<vector<int> > imageSmoother(vector<vector<int> >& M) {
        
        if(M.size() == 0)
            return M;
        
        int row, col; 
        int a;
        int cnt;
        row = M.size();
        col = M[0].size();
        
        vector< vector<int> > res;
        
        for(int i=0; i<row; i++) {
            vector<int> tmp(col);
            
            for(int j=0; j<col; j++) {
                cnt = 1;
                
                if(i!=0)
                    tmp[j] += M[i-1][j], cnt++;
                if(i!=0 && j+1!=col)
                    tmp[j] += M[i-1][j+1], cnt++;
                if(j+1!=col)
                    tmp[j] += M[i][j+1], cnt++;
                if(i+1!=row && j+1!=col)
                    tmp[j] += M[i+1][j+1], cnt++;
                if(i+1!=row)
                    tmp[j] += M[i+1][j], cnt++;
                if(i+1!=row && j!=0)
                    tmp[j] += M[i+1][j-1], cnt++;
                if(j!=0)
                    tmp[j] += M[i][j-1], cnt++;
                if(j!=0 && i!=0)
                    tmp[j] += M[i-1][j-1], cnt++;
                
                tmp[j] += M[i][j];


                
                tmp[j] = int(tmp[j]*1.0/cnt);
            
//                printf("%d, %d %d, %d\n", cnt, i, j, tmp[j]);
                
            }
            res.push_back(tmp);
            
        }
        
        return res;
        
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
//    printf("F");
    
    int row, col; 
    vector< vector<int> > M;
    
    
    scanf("%d %d", &row, &col);
    for(int i=0; i<row; i++) {
        vector<int> tmp(col);
        for(int j=0; j<col; j++) {
            scanf("%d", &tmp[j]);
        }
        M.push_back(tmp);
    }
    
//    printf("F");
    imageSmoother(M);
    
    return 0; 
}