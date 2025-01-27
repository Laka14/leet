class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> row, col;
        int n = grid.size();
        int j=0;
        for(int i =0; i<n; i++){
            vector<int> v1=grid[i];
            vector<int> v2;
            for(int j=0; j<n; j++){
                v2.push_back(grid[j][i]);
            }
            row[v1]++;
            col[v2]++;
        }
        int ans=0;
        for(auto it: row){
            ans+= row[it.first]*col[it.first];
        }

        return ans;
        
    }
};