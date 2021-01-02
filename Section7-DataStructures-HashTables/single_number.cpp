/*
Simple hash search for occurence
*/
#include "unordered_map"
#include "vector"
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> track;
        for (int i = 0; i < nums.size(); i++) {
            track[nums[i]]++;
        }
        for (auto it: track) {
            if(it.second == 1) return it.first;
        }
        return nums[0];
    }
};