class Solution {
  public:
    void sortColors(vector<int> &nums) {
        int start = 0, end = nums.size() - 1;
        int new_start = 0;

        while (start <= end) {
            if (nums[start] == 0) {
                swap(nums[new_start], nums[start]);
                new_start++;
                start++;
            } else if (nums[start] == 1) {
                start++;
            } else {
                swap(nums[end], nums[start]);
                end--;
            }
        }
    }
};
