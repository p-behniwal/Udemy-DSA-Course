/*
Trivial hash map comparisons
*/
#include "map"
#include "string"
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        map<char,int> mp2;
        for(int i = 0; i < s.size(); i++) {
            if(mp.find(s[i]) == mp.end()){
                if(mp2.find(t[i]) != mp2.end())
                    return false;
                mp[s[i]] = t[i];
                mp2[t[i]]++;
            }
            else{
                if(mp[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};