class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        for(int i =0; i<k; i++){
            sum+=nums[i];
        }
        int maxi = sum;
        for(int i =0; i<n-k; i++){
            sum-=nums[i];
            sum+=nums[k+i];
            maxi = max(maxi, sum);
        }
        return (double) maxi / (double) k;
    }
};