/*
Traverse through array,
when element is non-zero, place it sequentially in front of array,
a position variable increments as non-zero elements are inserted at sequentially.
Fill the rest of the array with zeros, as they are obviously zeros.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int arr_len = nums.size();
        int place_idx = 0;
        for (int i = 0; i < arr_len; i++) {
            if (nums[i] != 0){
                nums[place_idx] = nums[i];
                place_idx++;
            }
        }
        for (int i = place_idx; i < arr_len; i++) {
            nums[i] = 0;
        }
    }
};