class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n,1);
        vector<int> suf(n,1);
        for(int i =0;i<nums.size()-1;i++) {
            pre[i+1] = pre[i]*nums[i];
        }
        for(int i =n-1; i>0; i--){
            suf[i-1] = suf[i]*nums[i];
        }
        for(int i =0; i<nums.size(); i++) nums[i] =pre[i]*suf[i];
        
        return nums;
    }
};