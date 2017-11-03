/*

380. Insert Delete GetRandom O(1)
https://leetcode.com/problems/insert-delete-getrandom-o1/description/


Design a data structure that supports all following operations in average O(1) time.

insert(val): Inserts an item val to the set if not already present.
remove(val): Removes an item val from the set if present.
getRandom: Returns a random element from current set of elements. Each element must have the same probability of being returned.
Example:

// Init an empty set.
RandomizedSet randomSet = new RandomizedSet();

// Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomSet.insert(1);

// Returns false as 2 does not exist in the set.
randomSet.remove(2);

// Inserts 2 to the set, returns true. Set now contains [1,2].
randomSet.insert(2);

// getRandom should return either 1 or 2 randomly.
randomSet.getRandom();

// Removes 1 from the set, returns true. Set now contains [2].
randomSet.remove(1);

// 2 was already in the set, so return false.
randomSet.insert(2);

// Since 2 is the only number in the set, getRandom always return 2.
randomSet.getRandom();

*/


#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;


#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))


const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f; 
const long long INFL = 0x3f3f3f3f3f3f3f3fLL;

class RandomizedSet {
    
private:
    vector<int> vec;
    unordered_map<int, int> m;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
        vec = vector<int>();
        m = unordered_map<int, int>();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        
        if( m.find(val) != m.end()) return false; 
        vec.push_back(val);
        m[val] = vec.size()-1;

        return true;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        
        if( m.find(val) == m.end()) return false;
        
        int idx, tmp; 
        idx = m[val];
        tmp = vec.back();
        vec[idx] = tmp;
        m[tmp] = m[val];
        vec.pop_back();
        m.erase(val);

        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
//        printf("r: %d, %d\n", rand(), vec.size()); 
        return vec[rand()%vec.size()];
    }
    
    void test() {
        for(int i=0; i<vec.size(); i++)
            printf("t: %d, %d\n", vec[i], vec.size());
    }

};

int main(){
    
#ifndef ONLINE_JUDGE
    assert(freopen("text.in", "r", stdin));
//  assert(freopen("text.out", "w", stdout));
#endif
    
    int val = 2;
    
    RandomizedSet obj;
    bool param_1 = obj.insert(1);
    bool param_2 = obj.remove(2);
    bool param_3 = obj.insert(2);
    int  param_4 = obj.getRandom();
    bool param_5 = obj.remove(1);
    bool param_6 = obj.insert(2);
    int  param_7 = obj.getRandom();
//obj.test();
//    printf("%d, %d, %d, %d, %d, %d\n", param_1, param_2, param_3, param_4, param_5, param_6);
    
    return 0; 
}

