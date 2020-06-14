class Solution {
  public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst,
                          int K) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for (auto const &x : flights) {
            graph[x[0]].push_back({x[1], x[2]});
        }

        vector<int> prices(n, -1);
        queue<pair<int, int>> q;
        q.push({src, 0});
        K++;
        while (!q.empty()) {
            if (!K)
                break;
            int l = q.size();
            for (int i = 0; i < l; i++) {
                auto curr = q.front();
                q.pop();
                for (auto const &x : graph[curr.first]) {
                    int price = x.second + curr.second;
                    if (prices[x.first] == -1 || price < prices[x.first]) {
                        prices[x.first] = price;
                        q.push({x.first, price});
                    }
                }
            }
            K--;
        }
        return prices[dst];
    }
};
