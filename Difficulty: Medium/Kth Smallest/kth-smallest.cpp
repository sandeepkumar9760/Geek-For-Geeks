class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        int idx = k;
        while(idx<arr.size()){
            if(pq.top()<=arr[idx]){
                idx++;
            }else{
                pq.pop();
                pq.push(arr[idx]);
                idx++;
            }
        }
        return pq.top();
    }
};