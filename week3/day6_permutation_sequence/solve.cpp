class Solution {
  public:
    string getPermutation(int n, int k) {
        string r;
        vector<int> numbers(n);
        iota(numbers.begin(), numbers.end(), 1);

        auto fact = [](int i) {
            int ans = 1;
            for (int j = 2; j <= i; j++)
                ans *= j;
            return ans;
        };

        int nn = n;

        for (int i = 0; i < nn; i++) {
            int d = (k - 1) / fact(n - 1);
            k -= d * fact(n - 1);

            n -= 1;
            r += to_string(numbers[d]);
            numbers.erase(numbers.begin() + d);
        }

        return r;
    }
};
