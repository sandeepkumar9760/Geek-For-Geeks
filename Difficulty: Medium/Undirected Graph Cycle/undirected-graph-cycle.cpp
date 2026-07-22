class Solution {
  public:
    bool bfs(vector<vector<int>>&adj , int node , vector<int>&visited){
        queue<pair<int,int>>q;
        q.push({node,-1});
        visited[node]=1;
        while(!q.empty()){
            int u = q.front().first;
            int parent = q.front().second;
            q.pop();
            for( auto child : adj[u]){
                if(!visited[child]){
                    q.push({child,u});
                    visited[child]=1;
                }else if(parent!=child){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V+1);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>visited(V+1,0);
        for(int i=0;i<V+1;i++){
            if(!visited[i]){
                if(bfs(adj,i,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};