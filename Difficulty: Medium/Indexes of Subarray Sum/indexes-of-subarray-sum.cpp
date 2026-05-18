class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int left = 0;
        long long sum = 0;

        for (int right = 0; right < arr.size(); right++) {
            sum += arr[right];

            // Shrink window if sum exceeds target
            while (sum > target && left <= right) {
                sum -= arr[left];
                left++;
            }

            // Found target sum
            if (sum == target) {
                return {left + 1, right + 1}; // 1-based indexing
            }
        }

        return {-1};
    }
};