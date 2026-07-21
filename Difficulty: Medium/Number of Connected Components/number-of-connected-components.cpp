class Solution {
  public:
    void find_dfs(vector<vector<int>>&ans , vector<int>&visited , int node){
        visited[node]=1;
        for(auto i : ans[node]){
            if(!visited[i]){
                find_dfs(ans,visited,i);
            }
        }
    }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>visited(V,0);
        vector<vector<int>>ans(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            ans[u].push_back(v);
            ans[v].push_back(u);
        }
        int count = 0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                find_dfs(ans,visited,i);
                count++;
            }
        }
        return count;
    }
};