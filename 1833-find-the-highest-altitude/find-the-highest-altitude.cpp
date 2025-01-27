class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int diff=0, maxi =0;
        for(int i =0; i<n; i++){
            diff+=gain[i];
            maxi= max(diff, maxi);
        }
        return maxi;
    }
};