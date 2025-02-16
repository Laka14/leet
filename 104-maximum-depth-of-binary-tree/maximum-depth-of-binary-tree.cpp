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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int depth = 0;
        int maxi =0;
        queue<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty()){
            depth++;
            int s = stk.size();
            for(int i = 0; i<s; i++){
                TreeNode* node = stk.front();
                stk.pop();
                if(node->right!=NULL) stk.push(node->right);
                if(node->left!=NULL) stk.push(node->left);
            }
        }
        return depth;
    }
};