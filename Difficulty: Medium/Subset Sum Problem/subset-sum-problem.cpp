class Solution {
  public:
    bool is_valid(int idx ,int crr_sum, vector<int>&arr , int sum){
        if(crr_sum==sum){
            return true;
        }
        if(idx==arr.size() || crr_sum>sum){
            return false;
        }
        // /option 1 pick
        
        bool pick = is_valid(idx+1,crr_sum+arr[idx],arr,sum);
        if(pick==true){
            return true;
        }
        bool not_pick = is_valid(idx+1,crr_sum,arr,sum);
        return not_pick;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        return is_valid(0,0,arr,sum);
        
    }
        
};