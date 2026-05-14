class Solution {
  public:
    void helper(vector<vector<int>> &maze ,vector<string> &ans, string path, int row , int col){
        int size = maze.size();
        if(row<0 || col<0 || row>=size || col>=size || maze[row][col]==0 || maze[row][col]==-1){
            return;
        }
        if(row==size-1 && col==size-1){
            ans.push_back(path);
            return;
        }
        
        maze[row][col]=-1;
        
        
        //down call 
        helper(maze,ans,path+"D",row+1,col);
         //left call
        helper(maze,ans,path+"L",row,col-1);
         //right call
        helper(maze,ans,path+"R",row,col+1);
         //up call
        helper(maze,ans,path+"U",row-1,col);
       
        
        
        
        
        maze[row][col]=1;
    }
        
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        if(maze[0][0]==0){
            return ans;
        }
        helper(maze,ans,"",0,0);
        return ans;
        
    }
};