class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int low = 0;
        int res = INT_MIN;
        unordered_map<char,int>map;
        for(int high=0; high<s.length(); high++){
            map[s[high]]++;
            if(map.size()>k){
                map[s[low]]--;
                if(map[s[low]]==0){
                    map.erase(s[low]);
                }
                low++;
            }
            if(map.size()==k){
                res = max(res,high-low+1);
            }
        }
        if(res>INT_MIN){
            return res;
        }else{
            return -1;
        }
    }
};