class Solution {
  public:
    void find_dfs(vector<int>&ans , int node , vector<vector<int>>& adj , vector<int>&visited){
        visited[node]=1;
        ans.push_back(node);
        
        for( int i : adj[node]){
            if(!visited[i]){
                find_dfs(ans,i,adj,visited);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>visited(adj.size(),0);
        vector<int>ans;
        
        find_dfs(ans,0,adj,visited);
        return ans;
    }
};