/*
Simple hash table solution
*/
#include "unordered_map"
#include "vector"
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> track;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (track.find(nums[i]) == track.end()) {
                track[nums[i]] = i;
            }
            else {
                if (i - track[nums[i]] <= k) return true;
                else track[nums[i]] = i;
            }
        }
        return false;
    }
};