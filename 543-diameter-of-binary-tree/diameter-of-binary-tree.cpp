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
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        ht(root, d);
        return d;
    }
    int ht(TreeNode* node, int& d){
        if(!node) return 0;

        int left = ht(node->left, d);
        int right = ht(node->right, d);
        d = max(left+right, d);
        return max(left, right)+1;
    }
};