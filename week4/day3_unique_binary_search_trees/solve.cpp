class Solution {
  public:
    int numTrees(int n) {
        vector<int> dp(n + 1);
        dp[0] = dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                int l = j;
                int r = i - 1 - l;
                dp[i] += dp[l] * dp[r];
            }
        }

        return dp[n];
    }
};
