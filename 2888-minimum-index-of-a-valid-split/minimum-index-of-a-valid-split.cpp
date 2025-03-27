class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n  = nums.size();
        int ans=-1;
        unordered_map<int, int> mp1, mp2;
        int ind=-1; 
        for(auto x: nums) mp1[x]++;
        for(int i=0; i<n; i++) {
            mp1[nums[i]]--;
            mp2[nums[i]]++;
            if(mp2[nums[i]]*2>i+1 && mp1[nums[i]]*2>n-i-1) return i;
        }
        return -1;

    }
};