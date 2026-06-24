class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int res = -1;
        int st = 0;
        int ed = arr.size()-1;
        while(st<=ed){
            int mid = st + (ed-st)/2;
            if(arr[mid]<=x){
                res = mid;
                st = mid+1;
            }else{
                ed = mid-1;
            }
        }
        return res;
    }
};
