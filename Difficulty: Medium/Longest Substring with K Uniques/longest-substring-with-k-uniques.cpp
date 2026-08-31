class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int ans = -1;
        int low = 0;
        unordered_map<char,int>map;
        for(int high=0;high<s.size();high++){
            map[s[high]]++;
            int size = high - low + 1;
            while(map.size()>k){
                map[s[low]]--;
                if(map[s[low]]==0){
                    map.erase(s[low]);
                    low++;
                    
                }else{
                    low++;
                }
                size = high - low + 1;
            }
            if(map.size()==k) ans=max(ans,size);
        }
        return ans;
    }
};