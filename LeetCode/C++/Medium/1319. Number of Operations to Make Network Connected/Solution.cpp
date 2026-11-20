class Solution {
public:

    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node] = true;
        for(int neigh : adj[node]){
            if(!vis[neigh]){
                dfs(neigh, adj, vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n - 1) return -1;

        vector<vector<int>> adj(n);
        for(auto edge: connections){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> vis(n, false);
        int com = -1;

        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                com++;
                dfs(i, adj, vis);
            }
        }

        return com;
    }
};