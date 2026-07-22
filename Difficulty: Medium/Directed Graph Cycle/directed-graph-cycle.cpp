class Solution {
  public:
    bool solve(vector<int>&visited , int node , vector<vector<int>>&adj , vector<int>&path_visit){
        visited[node]=1;
        path_visit[node]=1;
        for(auto it : adj[node]){
            if(!visited[it]){
                if(solve(visited,it,adj,path_visit)){
                    return true;
                }
            }else if(path_visit[it]==1){
                return true;
            }
        }
        path_visit[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>>adj(V);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> visited(V,0) , path_visit(V,0);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(solve(visited,i,adj,path_visit)){
                    return true;
                }
            }
        }
        return false;
    }
};