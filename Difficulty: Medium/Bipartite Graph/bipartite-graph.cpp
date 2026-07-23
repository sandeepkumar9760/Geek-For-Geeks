class Solution {
  public:
    bool bfs(vector<vector<int>>&adj , vector<int>&color , int node){
        queue<pair<int,int>>q;
        q.push({node,0});
        while(!q.empty()){
            int u = q.front().first;
            int col = q.front().second;
            q.pop();
            for(auto it : adj[u]){
                if(color[it]==-1){
                    q.push({it,!col});
                    color[it]=!col;
                }else if(color[it]==color[u]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>color(V,-1);
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(bfs(adj,color,i)==false) return false;
            }
        }
        return true;
    }
};