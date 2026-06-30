class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        stack<int>st;
        vector<int>ans;
        for(int i=0; i<arr.size(); i++){
            //popping all the smaller element
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            
            //adding
            if(st.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top());
            }
            
            st.push(arr[i]);
        }
        return ans;
    }
};