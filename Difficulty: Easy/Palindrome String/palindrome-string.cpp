class Solution {
  public:
    bool solve(int i , int j , string& str){
        if(i>j){
            return true;
        }
        if(str[i]!=str[j]){
            return false;
        }else{
            solve(i+1,j-1,str);
        }
    }
    bool isPalindrome(string& s) {
        // code here
        return solve(0,s.size()-1,s);
    }
};