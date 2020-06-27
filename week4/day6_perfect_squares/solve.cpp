class Solution {
  public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        for (int i = 0; i <= min(3, n); i++)
            dp[i] = i;

        for (int i = 4; i <= n; i++)
            for (int j = 1; j * j <= i; j++)
                dp[i] = min(dp[i], dp[i - j * j] + 1);

        return dp[n];
    }
};
