// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int best_sum = a[0];
        int res_sum = a[0];
        for(int i=1; i<a.size(); i++){
            int crr_sum = best_sum + a[i];
            int new_sum = a[i];
            best_sum = min(crr_sum,new_sum);
            res_sum = min(best_sum,res_sum);
        }
        return res_sum;
    }
};
