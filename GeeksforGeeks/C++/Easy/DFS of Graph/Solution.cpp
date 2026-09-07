class Solution {
  public:
 
    void DFS(vector<vector<int>> &adj, int node, vector<int> &res, vector<bool> &vis){
        res.push_back(node);
        vis[node] = true;
        
        for(int i = 0 ; i < adj[node].size() ; i++){
            int neigh = adj[node][i];
            if(vis[neigh] == false){
                DFS(adj, neigh, res, vis);
            }
        }
        return;
    }
 
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        
        int n = adj.size();
        vector<int> res;
        vector<bool> vis(n, 0);
        DFS(adj, 0, res, vis);
        return res;
    }
};