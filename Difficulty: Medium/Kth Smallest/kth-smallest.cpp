class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>mh;
        for(int i=0;i<arr.size();i++){
            mh.push(arr[i]);
        }
        k--;
        while(k--){
            mh.pop();
        }
        return mh.top();
    }
};