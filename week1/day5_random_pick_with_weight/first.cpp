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
        int r_i = 0, r_n = INT_MAX;
        for (int i = 0; i < dat.size(); i++) {
            if (dat[i] > choose) {
                if (dat[i] < r_n) {
                    r_n = dat[i];
                    r_i = i;
                }
            }
        }
        return r_i;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
