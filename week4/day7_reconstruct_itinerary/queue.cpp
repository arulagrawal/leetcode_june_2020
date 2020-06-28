class Solution {
    map<string, priority_queue<string, vector<string>, greater<string>>> matrix;
    vector<string> route;

  public:
    vector<string> findItinerary(vector<vector<string>> &tickets) {
        for (auto &x : tickets) {
            matrix[x[0]].push(x[1]);
        }

        dfs("JFK");
        return route;
    }

    void dfs(string airport) {
        while (!matrix[airport].empty()) {
            string next = matrix[airport].top();
            matrix[airport].pop();
            dfs(next);
        }

        route.insert(route.begin(), airport);
    }
};
