class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // simple if able to merge merge it otherwise leave it 
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end()) ;
        int i =0;
        int n = intervals.size();
        while(i<n){
            if (res.empty() || res.back()[1]<intervals[i][0]){
                res.push_back(intervals[i]);
            }
            else {
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
            i++;
        }
        return res;
    }
};