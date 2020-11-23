using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        vector<int> answer;
        for(int i = 0; i < nums.size(); ++i){
            int need = target - nums[i];
            if (seen.find(need) != seen.end()){
                answer.push_back(seen[need]);
                answer.push_back(i);
                return answer;
            }
            seen.insert(make_pair(nums[i], i));
        }
        return answer;
    }
};
