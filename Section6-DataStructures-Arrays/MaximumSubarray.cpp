class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int arr_len = nums.size();
        int max_sum = nums[0];
        int max_sofar = nums[0];
        for (int i = 1; i < arr_len; i++) {
            max_sofar = max(nums[i], max_sofar + nums[i]);
            if (max_sofar >= max_sum) {
                max_sum = max_sofar;
            }
        }
        return max_sum;
    }
};