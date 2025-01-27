class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
        int l=0, r=0;
        while(r<nums.size()){
            if(nums[r]==0) k--;
            if(k<0){//slide
                if(nums[l]==0) k++;
                l++;
            }
            r++;
        }
        return r-l-1;
    }
};