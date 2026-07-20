class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<vector<int>>arr(V);
        for(auto it : edges){
            int i = it.first;
            int j = it.second;
            
            arr[i].push_back(j);
            arr[j].push_back(i);
        }
        return arr;
        
    }
};