class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        if(arr.size()==1) return arr[0];
        if(arr.size()<k) return 0;
        int windowsum = 0;
        int low = 0;
        int high = k-1;
        for(int i=0; i<=high; i++){
            windowsum += arr[i];
        }
        int max_sum = windowsum;
        for(int i=k; i<arr.size(); i++){
            windowsum = windowsum + arr[i] - arr[i-k];
            max_sum = max(windowsum,max_sum);
        }
        return max_sum;
    }
};