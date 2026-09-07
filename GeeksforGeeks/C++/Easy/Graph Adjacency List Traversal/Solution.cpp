class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Initialize the adjacency list with V empty vectors
        vector<vector<int>> adj(V);

        for (auto& edge : edges) {
            int src = edge.first;
            int dest = edge.second;

            adj[src].push_back(dest);
            adj[dest].push_back(src);
        }

        return adj;
    }
};