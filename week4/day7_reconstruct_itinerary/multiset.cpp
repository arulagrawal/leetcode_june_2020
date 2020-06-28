class Solution {
    map<string, multiset<string>> matrix;
    vector<string> route;

  public:
    vector<string> findItinerary(vector<vector<string>> &tickets) {
        for (auto &x : tickets) {
            matrix[x[0]].insert(x[1]);
        }

        dfs("JFK");
        return vector<string>(route.rbegin(), route.rend());
    }

    void dfs(string airport) {
        while (!matrix[airport].empty()) {
            auto it = matrix[airport].begin();
            auto next = *it;
            matrix[airport].erase(it);
            dfs(next);
        }

        route.push_back(airport);
    }
};
