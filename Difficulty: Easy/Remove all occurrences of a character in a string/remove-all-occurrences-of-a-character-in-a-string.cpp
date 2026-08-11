class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void solve(string &str , int idx , char c){
        if(idx==str.size()) return;
        if(str[idx]==c){
            str.erase(idx,1);
            solve(str,idx,c);
        }else{
            solve(str,idx+1,c);
        }
        
    }
    void removeCharacter(string &s, char c) {
        // code here
        solve(s,0,c);
    }
};