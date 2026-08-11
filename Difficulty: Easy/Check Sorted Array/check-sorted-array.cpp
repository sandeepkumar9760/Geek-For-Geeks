class Solution {
  public:
    bool solve(vector<int>&arr , int idx){
        if(idx==arr.size()){
            return true;
        }
        if(arr[idx]<arr[idx-1]){
            return false;
        }else{
            return solve(arr,idx+1);
        }
    }
    bool isSorted(vector<int>& arr) {
        // code here
        return solve(arr,1);
    }
};