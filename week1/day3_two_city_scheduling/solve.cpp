class Solution {
  public:
    int twoCitySchedCost(vector<vector<int>> &costs) {
        int n = costs.size() / 2;
        int ans = 0;

        sort(costs.begin(), costs.end(), [&](auto const &a, auto const &b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        for (int i = 0; i < 2 * n; i++) {
            if (i < n)
                ans += costs[i][0];
            else
                ans += costs[i][1];
        }

        return ans;
    }
};
