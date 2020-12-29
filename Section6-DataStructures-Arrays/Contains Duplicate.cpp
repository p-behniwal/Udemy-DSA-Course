/*
Create a set from least element to greatest,
compare the size of the set to the size of input array
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return (unordered_set<int>(nums.begin(), nums.end())).size() != nums.size();
    }
};