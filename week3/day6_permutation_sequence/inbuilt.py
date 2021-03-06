from itertools import permutations
class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        p = permutations([str(i) for i in range(1, n + 1)], n)
        return "".join(list(p)[k - 1])
