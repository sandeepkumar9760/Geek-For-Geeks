class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        queue<int>q;
        vector<int>ans;
        
        for(int i=0; i<arr.size(); i++){
            //adding the element
            if(arr[i]<0) q.push(i);
            
            //deleting the element
            
            if(!q.empty() && q.front()<=i-k){
                q.pop();
            }
            
            //updating the element
            
            if(i>=k-1){
                if(q.empty()){
                    ans.push_back(0);
                }else{
                    ans.push_back(arr[q.front()]);
                }
            }
        }
        return ans;
    }
};