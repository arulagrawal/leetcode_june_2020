class Solution {
  public:
    bool isPowerOfTwo(int n) {
        return n > 0 && pow(2, (int)log2(n)) == n;
    }
};
