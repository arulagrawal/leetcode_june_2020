class Solution {
  public:
    int twoCitySchedCost(vector<vector<int>> &costs) {
        int n = costs.size() / 2;
        int a = 0, b = 0, ans = 0;

        sort(costs.begin(), costs.end(), [&](auto const &a, auto const &b) {
            return abs(a[0] - a[1]) > abs(b[0] - b[1]);
        });

        for (int i = 0; i < 2 * n; i++) {
            if ((costs[i][0] <= costs[i][1] && a < n) || b == n) {
                ans += costs[i][0];
                a++;
            } else {
                ans += costs[i][1];
                b++;
            }
        }
        return ans;
    }
};
