class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        int platform = 0;
        int res = 0;
        int i=0;
        int j=0;
        while(i<arr.size()){
            if(arr[i]<=dep[j]){
                platform++;
                res = max(platform,res);
                i++;
            }else{
                platform--;
                j++;
            }
        }
        return res;
    }
};
