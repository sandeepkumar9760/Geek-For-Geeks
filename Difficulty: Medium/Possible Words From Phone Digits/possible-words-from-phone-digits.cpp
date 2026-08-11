class Solution {
  public:
    void solve(int idx , vector<int>&arr , vector<string>&store , vector<string>&ans , string str){
        if(idx==arr.size()){
            ans.push_back(str);
            return;
        }
        string s = store[arr[idx]];
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                str.push_back(s[i]);
                solve(idx+1,arr,store,ans,str);
                str.pop_back();
            }else{
                solve(idx+1,arr,store,ans,str);
                str.pop_back();
            }
            
        }
    }
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string>store{" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        solve(0,arr,store,ans,"");
        return ans;
    }
};