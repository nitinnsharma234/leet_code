class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row (matrix.size()), col(matrix[0].size());
        int i =0,j=col-1;
        while(i<row and j>=0){
            if (matrix[i][j]==target){
                return true;
            }
            while(j>=0 and target<matrix[i][j]){
                cout<<i<<" "<<j<<endl;
                j--;
            }

            while( j>=0 and i<row and target>matrix[i][j]){
                    cout<<i<<" "<<j<<endl;
                i++;
            }
        }
        return false;
    }
};