class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0, j=n-1;
        int ans =0;
        sort(nums.begin(), nums.end());
        while(i<j){
            if(nums[i]+nums[j]==k) {
                ans++;
                i++;
                j--;
            }
            else if(nums[i]<k-nums[j]) i++;
            else j--;
        }
        return ans;
    }
};