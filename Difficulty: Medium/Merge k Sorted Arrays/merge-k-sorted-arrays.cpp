class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        priority_queue<int,vector<int>,greater<int>>pq;
        int m = mat.size();
        int n = mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                pq.push(mat[i][j]);
            }
        }
        vector<int>res;
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};