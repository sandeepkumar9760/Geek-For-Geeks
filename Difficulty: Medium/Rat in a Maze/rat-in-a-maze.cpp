class Solution {
  public:
    void solve(int row , int col , vector<vector<int>>&maze ,vector<string>&ans, string crr, vector<vector<int>>&visited){
        if(row==maze.size()-1 && col==maze[0].size()-1){
            ans.push_back(crr);
            return;
        }
        if(row<0 || row>=maze.size() || col<0 || col>=maze[0].size()|| visited[row][col]==1 || maze[row][col]==0 ){
            return;
        }
        
        visited[row][col]=1;
        solve(row+1,col,maze,ans,crr+"D",visited);
        
        solve(row,col-1,maze,ans,crr+"L",visited);
        solve(row,col+1,maze,ans,crr+"R",visited);
        solve(row-1,col,maze,ans,crr+"U",visited);
        
        visited[row][col]=0;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<vector<int>>map(maze.size() ,vector<int>(maze[0].size(),0));
        vector<string>ans;
        if(maze[0][0]==0) return ans;
        solve(0,0,maze,ans,"",map);
        return ans;
        
    }
};