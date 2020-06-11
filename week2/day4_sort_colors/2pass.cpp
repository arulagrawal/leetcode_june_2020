class Solution {
  public:
    void sortColors(vector<int> &nums) {
        vector<int> m(3, 0);
        for (int const &x : nums) {
            m[x]++;
        }
        int t = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < m[i]; j++) {
                nums[t++] = i;
            }
        }
    }
};
