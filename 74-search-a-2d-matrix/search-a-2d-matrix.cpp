class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
           int r =matrix.size();
        int c = matrix[0].size();
        int i =0;
        int j =c-1;
        while(i<r and j>=0){
              int s = matrix[i][j];
            
            if(s>target){
                //left
                j--;
            }
            else if(s<target){
                i++;
            }
            else {
                return true;
            }
        }

        return false;
    }
};