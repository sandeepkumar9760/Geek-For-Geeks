class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        vector<int>result{-1,-1};
        bool check = false;
        // if(arr.size()==0 && target==0) return result;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==target){
                result[0] = mid;
                check = true;
                end = mid - 1;
            }else if(arr[mid]<target){
                start = mid + 1;
            }else{
                end = mid-1;
            }
        }
        // start = 0;
        end = arr.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==target){
                result[1] = mid;
                start = mid + 1;
            }else if(arr[mid]>target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        if(check){
            int ans = result[1]-result[0]+1;
            return ans;
        }else{
            return 0;
        }
        
    }
};
