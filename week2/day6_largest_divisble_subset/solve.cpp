class Solution {
  public:
    vector<int> largestDivisibleSubset(vector<int> &nums) {
        int n = nums.size();

        if (n == 0)
            return {};

        sort(nums.begin(), nums.end());

        vector<int> dp(n, 1);

        vector<int> prev(n, -1);

        int max_ind = 0;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 and dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if (dp[i] > dp[max_ind]) {
                max_ind = i;
            }
        }

        vector<int> answer;
        int t = max_ind;
        while (t >= 0) {
            answer.push_back(nums[t]);
            t = prev[t];
        }

        return answer;
    }
};
