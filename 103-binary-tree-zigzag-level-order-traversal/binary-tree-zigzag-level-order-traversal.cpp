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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> stk;
        int flag =0;
        stk.push(root);
        while(!stk.empty()){
            vector<int> level;
            int n  = stk.size();
            for(int i =0; i<n; i++){
                TreeNode* node = stk.front();
                stk.pop();
                if(node->left!=NULL) stk.push(node->left);
                if(node->right!=NULL) stk.push(node->right);
                level.push_back(node->val);
            }
            if(flag%2==1) reverse(level.begin(), level.end());
            ans.push_back(level);
            flag++;
        }
        return ans;
    }
};