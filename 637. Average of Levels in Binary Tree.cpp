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
public:
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> result;
        queue<TreeNode*> q;

        q.push(root);
        while (!q.empty()) {
            double sum = 0;
            int q_len = q.size();

            for (int i = 0; i < q_len; i++) {
                TreeNode* cur = q.front();
                sum += cur->val;

                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
                q.pop();
            }
            result.push_back(sum / q_len);
        }

        return result;
    }
};