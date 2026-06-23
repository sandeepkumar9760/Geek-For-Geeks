class Solution {
  public:
    bool isIntersect(vector<vector<int>> intervals) {
        // Code Here
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(end>=intervals[i][0]){
                return true;
            }else{
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        return false;
    }
       
};