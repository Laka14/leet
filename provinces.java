/*There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Return the total number of provinces.
*/
class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;
        int p=0;
        boolean vis[] = new boolean[n];
        for(int i =0; i<n; i++){
            if(!vis[i]){
                DFS(isConnected, i, vis);
                p++;
            }
        }
        return p;
    }
    public void DFS(int[][] isConnected, int curr, boolean vis[]){
        vis[curr]=true;
        for(int i=0; i<isConnected[curr].length; i++){
            if(!vis[i] && isConnected[curr][i]==1){
                DFS(isConnected, i, vis);
            }
        }
    }
}
