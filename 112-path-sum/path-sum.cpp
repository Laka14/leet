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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int currsum =0;
        if(!root) return false;
        stack<pair<int, TreeNode*>> stk;
        stk.push({0, root});
        while(!stk.empty()){
            TreeNode* node=stk.top().second;
            int curr = stk.top().first;
            stk.pop();
            int i=0;
            curr+=node->val;
            if(node->left!=NULL){ stk.push({curr, node->left}); i++;}
            if(node->right!=NULL){ stk.push({curr, node->right}); i++;}
            
            if(i==0 && curr == targetSum) return true; 
            
        }
        return false;
    }
};