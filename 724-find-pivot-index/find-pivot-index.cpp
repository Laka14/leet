class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size(), sum=0;
        for(int i =0; i<n; i++) sum += nums[i];
        int pre= 0, suf=sum, j=n-1;

        for(int i =0; i<n; i++){
            if(i>0) pre+=nums[i-1];
            suf-=nums[i];
            if(pre==suf) return i;
        }
        return -1;
    }
};