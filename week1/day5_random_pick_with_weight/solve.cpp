class Solution {
  public:
    vector<int> dat;
    Solution(vector<int> &w) {
        for (int i = 1; i < w.size(); i++)
            w[i] += w[i - 1];

        dat = w;
    }

    int pickIndex() {
        int choose = rand() % dat.back();
        return upper_bound(dat.begin(), dat.end(), choose) - dat.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
