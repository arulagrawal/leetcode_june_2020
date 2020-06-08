class Solution {
  public:
    bool isPowerOfTwo(int n) {
        if (n < 1)
            return false;

        int count = 0;
        while (n) {
            n &= n - 1;
            count++;
        }
        return count == 1;
    }
};
