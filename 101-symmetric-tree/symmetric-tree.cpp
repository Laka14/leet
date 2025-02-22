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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        return help(root->left, root->right);
    }
    bool help(TreeNode* l, TreeNode* r){
        if(l==NULL|| r==NULL) return l==r;
        if(l->val!=r->val) return false;
        
        return help(l->left, r->right) && help(l->right, r->left);
    }

};