class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        queue<int>q;
        
        vector<int>ans;
        
        for(int i=0; i<arr.size(); i++){
            
            if(arr[i]<0){
                q.push(arr[i]);
            }
            
            if(i-k>=0 && arr[i-k]<0){
                q.pop();
            }
            
            if(i>=k-1){
                if(q.empty()){
                    ans.push_back(0);
                }else{
                    ans.push_back(q.front());
                }
            }
            
            
            
        }
        return ans;
    }
};