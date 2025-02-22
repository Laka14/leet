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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        int x, y;
        map<int, vector<int> > mp;
        queue<pair<int, TreeNode*>> q;
        q.push({0, root});
        while(!q.empty()){
            int n = q.size();
            map<int, priority_queue<int, vector<int>, greater<int> >> temp;
            for(int i =0; i<n; i++){
                auto it = q.front();
                int ind = it.first;
                q.pop();
                TreeNode* node = it.second;
                temp[ind].push(node->val);
                if(node->left!=NULL) q.push({ind-1, node->left});
                if(node->right!=NULL) q.push({ind+1, node->right});
            }
            for(auto pp: temp){
                int i = pp.first;
                auto pq = pp.second;
                while(!pq.empty()){
                    mp[i].push_back(pq.top());
                    pq.pop();
                }
            }
        }
    

        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;



    }
};