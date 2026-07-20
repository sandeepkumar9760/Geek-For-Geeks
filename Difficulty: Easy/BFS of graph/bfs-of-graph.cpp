class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int size = adj.size();
        vector<int>visited(size,0);
        vector<int>ans;
        queue<int>q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int u = q.front();
            ans.push_back(u);
            q.pop();
            for(auto i : adj[u]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=1;
                }
            }
            
        }
        return ans;
    }
};