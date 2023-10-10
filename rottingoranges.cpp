/*You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.*/
You are given an m x n grid where each cell can have one of three values:

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<int> q;
        int f = 0,r=0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i<n;i++){
            for(int j =0; j<m; j++){
                if(grid[i][j]==2){
                    q.push(i*m +  j);r++;
                }
                else if(grid[i][j]==1)f++;
            }
        }
        if(r==n*m)return 0;
        vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
        int ans =0;
        while(!q.empty()){
            int nn = q.size();
            bool chk = 0;
            while(nn--){
                int x = q.front()/m;
                int y = q.front()%m;
                q.pop();
                for(auto t:d){
                    int x1 = x+t.first;
                    int y1 = y+t.second;
                    if(x1>=0 && x1<n && y1>=0 && y1<m && grid[x1][y1]==1){
                        grid[x1][y1]=2;
                        q.push(x1*m+y1);
                        chk = 1;
                        f--;
                    }
                }
            }
            if(chk)ans++;
        }
        if(f>0)return -1;
        return ans;
    }
};
