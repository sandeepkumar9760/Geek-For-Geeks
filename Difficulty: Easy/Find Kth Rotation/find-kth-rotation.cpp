class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int start = 0;
        int end = arr.size()-1;
        if(arr.size()==1) return 0;
        if(arr[start]<=arr[end]) return 0;
        int mid;
        while(start<end){
            mid = start + (end-start)/2;
            if(arr[mid]>=arr[end]){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        return start;
    }
};
