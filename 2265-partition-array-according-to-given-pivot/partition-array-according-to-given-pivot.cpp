class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        int j=0, cnt=0;
        for(int i =0; i<n;i++){
            if(nums[i]<pivot) {ans[j] = nums[i]; j++;}
            if(nums[i]==pivot) cnt++;   
        }
        for(int i=j; i<j+cnt; i++) ans[i] = pivot;
        for(int i =0; i<n; i++){
            if(nums[i]>pivot) {ans[j+cnt] = nums[i]; j++;}
        }
        return ans;
    }
};