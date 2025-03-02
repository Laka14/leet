class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> mp;
        vector<vector<int>> ans;
        for(auto num: nums1) mp[num[0]]+=num[1];
        for(auto num: nums2) mp[num[0]]+=num[1];

        for(auto pp: mp){
            vector<int> v;
            v.push_back(pp.first);
            v.push_back(pp.second);
            ans.push_back(v);
        }
        return ans;
    }
};