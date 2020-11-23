using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        Map<int,int> seen = new HashMap<>();
        for(int i = 0; i < nums.size(); ++i){
            int need = target - nums[i];
            if (seen.containsKey(need)){
                return new int[] {seen.get(need), i};

            }
            seen.put(nums[i], i);
        }
        
    }
};
