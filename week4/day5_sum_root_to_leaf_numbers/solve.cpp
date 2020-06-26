/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
  public:
    int sumNumbers(TreeNode *root) {
        int total = 0;
        sum(root, 0, total);
        return total;
    }

    void sum(TreeNode *node, int curr, int &total) {
        if (!node)
            return;

        curr = curr * 10 + node->val;

        if (node->left)
            sum(node->left, curr, total);

        if (node->right)
            sum(node->right, curr, total);

        if (!node->left && !node->right)
            total += curr;
    }
};
