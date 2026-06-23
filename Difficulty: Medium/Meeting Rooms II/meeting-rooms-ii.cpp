class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        int rooms = 0;
        int res = 0;
        int i=0;
        int j=0;
        while(i<start.size()){
            if(start[i]<end[j]){
                rooms++;
                res = max(res,rooms);
                i++;
            }else{
                rooms--;
                j++;
            }
        }
        return res;
    }
};
