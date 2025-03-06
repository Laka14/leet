class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int tot=n*n;
        long long sum = 0, sq=0;
        for(int i =0; i<n; i++){
            for(int j=0; j<n; j++){
                sum+=grid[i][j];
                sq+=grid[i][j]*grid[i][j];
            }
        }
        long long diff = (tot*(tot+1ll))/2ll - sum;
        long long sqdiff = (tot*(2ll*tot + 1ll)*(tot+1ll))/6ll - sq;

        vector<int> v(2);
        v[0] = (sqdiff/diff - diff)/2ll;
        v[1] = (sqdiff/diff + diff)/2ll;
        return v;
    }
};