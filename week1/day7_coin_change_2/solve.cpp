class Solution {
  public:
    int change(int amount, vector<int> &coins) {
        int n = coins.size();
        vector<vector<int>> dp(amount + 1, vector<int>(n + 1, 0));

        for (int j = 0; j <= n; j++)
            dp[0][j] = 1;

        for (int i = 1; i <= amount; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = dp[i][j - 1];
                if (i - coins[j - 1] >= 0)
                    dp[i][j] += dp[i - coins[j - 1]][j];
            }
        }
        return dp[amount][n];
    }
};
