class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
         int i =1;
        int n = points.size();  
        int count=1 ;
        int last =points[0][1];
        while(i<n){
            if(points[i][0]>last){
                count++;
                last =points[i][1];
            }
            else{
                last =min(last,points[i][1]);
            }
            i++;
        }
        return count ;
    }
    // 1 6 28 34 49
};