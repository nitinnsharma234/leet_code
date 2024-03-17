class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // jisme overlap nahi ho rha before merged
        int n = intervals.size();
        int i =0; 
        vector<vector<int>>resp;
        while(i<n  &&  intervals[i][1] < newInterval[0]){
            resp.push_back(intervals[i]);
            i++;
        }
         while(i<n  &&  intervals[i][0] <= newInterval[1]){
              newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
          resp.push_back(newInterval);
         while(i<n){
            resp.push_back(intervals[i]);
            i++;
        }
        // merge overlapping 
        // no overlapping after merged 
        return resp;
    }
};