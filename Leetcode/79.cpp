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

    bool dfs(vector< vector<char> >& board, string &word, int i, int j, int idx) {
        
        
        if(idx >= word.length())
            return true;
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
            return false; 
        
        char c;
        if(board[i][j] == word[idx]) {
            
            printf("%d %d %c\n", i, j, board[i][j]); 
            
            c = board[i][j]; 
            board[i][j] = '\0'; 
            
            if( dfs(board, word, i-1, j, idx+1) )
                return true;
            
            if( dfs(board, word, i+1, j, idx+1) )
                return true;
            
            if( dfs(board, word, i, j-1, idx+1) )
                return true;
            
            if( dfs(board, word, i, j+1, idx+1) )
                return true;
            
            board[i][j] = c; 

        }   
        else{
            printf("-- %d %d , %c %c\n", i, j, board[i][j], word[idx]); 
        }
        
        return false; 

    }
    
    
    bool exist(vector< vector<char> >& board, string word) {
        
        if(word.length() == 0 )
            return true;
        
        if(board.size() == 0)
            return false;
        
        int nb_row, nb_col;
        
        nb_row = board.size(); 
        nb_col = board[0].size(); 
        
        for(int i=0; i<nb_row; i++) {
            
            for(int j=0; j<nb_col; j++) {
                
                if(dfs(board, word, i, j, 0)) {
                    
                    return true;
                }
                
            }
            
        }
            
        return false; 
        
        
        
    }


int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int m, n; 
    char s[10000];
    scanf("%d %d", &m, &n);
    
    
    
    string word("ABCCED");
    vector< vector<char> > mat(m, vector<char>(n));
    
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%c", &mat[i][j]); 
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            printf("%c ", mat[i][j]); 
        printf("\n"); 
    }
        
    printf("\n"); 
    printf("%s %d\n", word.c_str(), word.length()); 
    
    if(exist(mat, word))
        printf("YES");
    else
        printf("NO"); 
    
    
    
    return 0; 
}

