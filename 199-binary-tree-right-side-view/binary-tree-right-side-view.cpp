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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        map<int, int> mp;
        queue<pair<int, TreeNode*>> q;
        q.push({0, root});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int ind = it.first;
            TreeNode* node = it.second;
            mp[ind] = node->val;
            if(node->left!=NULL) q.push({ind+1, node->left});
            if(node->right!=NULL) q.push({ind+1, node->right});
        }
        for(auto pp: mp){
            ans.push_back(pp.second);
        }
        return ans;
    }
};