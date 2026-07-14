class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        int ans = INT_MAX;
        bool possible = false;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]>=x){
                ans = min(ans,mid);
                end = mid - 1;
                possible = true;
            }else{
                start = mid+1;
            }
        }
        if(possible){
            return ans;
        }else{
            return -1;
        }
    }
};