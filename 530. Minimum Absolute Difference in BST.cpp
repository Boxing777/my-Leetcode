/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans = INT_MAX;
    int pre = -1;

public:
    int getMinimumDifference(TreeNode* root)
    {
        Inorder(root);
        return ans;
    }

private:
    // LDR
    void Inorder(TreeNode* root)
    {
        // L
        if (root->left) Inorder(root->left);

        // D
        if (pre != -1) ans = min(ans, abs(root->val - pre));
        pre = root->val;

        // R
        if (root->right) Inorder(root->right);
    }
};