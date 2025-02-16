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
    int maxPathSum(TreeNode* root) {
        int maxi =root->val;
        dfs(root, maxi);
        return maxi;
    }
    int dfs(TreeNode* node, int& maxi){
        if(!node) return 0;
        int left = max(0,dfs(node->left, maxi));

        int right = max(0, dfs(node->right, maxi));

        maxi=max(left + right + node->val, maxi);

        return node->val + max(left, right);
    }
};