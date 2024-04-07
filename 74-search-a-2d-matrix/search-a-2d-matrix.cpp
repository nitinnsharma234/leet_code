class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row (matrix.size()), col(matrix[0].size());
        int l=0,r=row*col-1;
        while(l<=r){
            int mid =(l+r)/2;
            int nr=mid/col;
            int cl =mid%col;

            if(target==matrix[nr][cl]){
                return true;
            }
            else if (target>matrix[nr][cl]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
       
    }
};