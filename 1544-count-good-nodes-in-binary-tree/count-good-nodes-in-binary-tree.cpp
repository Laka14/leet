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
    int goodNodes(TreeNode* root) {
        int cnt=0;
        if(!root) return 0;
        
        stack<pair<int , TreeNode*>> stk;
        int r = root ->val;
        stk.push({r, root});
        while(!stk.empty()){
            TreeNode* node = stk.top().second;
            int maxi = stk.top().first;
            stk.pop();
            if(node->val >= maxi) cnt++;
            if(node->left!=NULL) stk.push({max(maxi, node->val),node->left});
            if(node->right!=NULL) stk.push({max(maxi, node->val), node->right}); 
        }
        return cnt;

    }
};