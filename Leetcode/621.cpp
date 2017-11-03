/*

621. Task Scheduler
https://leetcode.com/problems/task-scheduler/description/

Given a char array representing tasks CPU need to do. It contains capital letters A to Z where different letters represent different tasks.Tasks could be done without original order. Each task could be done in one interval. For each interval, CPU could finish one task or just be idle.

However, there is a non-negative cooling interval n that means between two same tasks, there must be at least n intervals that CPU are doing different tasks or just be idle.

You need to return the least number of intervals the CPU will take to finish all the given tasks.

*/


#include <bits/stdc++.h>

using namespace std;


bool cmp_decrease(int i, int j) { return i>j; } 

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;



    int leastInterval(vector<char>& tasks, int n) {
        
        int res;
        int small_idx;
        int cnt;
        
        vector<int> hash(26);
        for(int i=0; i<tasks.size(); i++){
            hash[ tasks[i]-'A' ]++;
        }
        

        sort(hash.begin(), hash.end(), cmp_decrease);
        
        int mx=0;
        int nb_mx=1;
        for(int i=0; i<hash.size()&&i<n+1; i++) {
            if(mx==hash[i])
                nb_mx++;
            else if(mx<hash[i]) {
                mx = hash[i];
                nb_mx=1;
            }
        }
        
        res = MAX( tasks.size(), (n+1-nb_mx)*(mx-1)+nb_mx*mx );
//        printf("%d,%d\n", mx, nb_mx);
//        printf("%d %d\n", tasks.size(), (n+1-nb_mx)*(mx-1)+nb_mx*mx);
//        printf("%d\n", res);
        
        return res;
    }

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int k, n;
    char s[100001];
    scanf("%d %d", &k, &n);
    
    vector<char> tasks(k);
    scanf("%s", s);
//    printf("%s", s);
//    
//    for(int i=0; i<strlen(s); i++)
//            printf("%d, ", s[i]);
//        printf("\n");
    
    for(int i=0; i<strlen(s); i++)
        tasks[i] = s[i];
    
    leastInterval(tasks, n);
    
    
    return 0; 
}

