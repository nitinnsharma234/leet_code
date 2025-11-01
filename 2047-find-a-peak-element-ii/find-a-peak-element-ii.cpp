class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low =0;
        int high=n;
        
        while(low<=high){
            int mid = (low+high)>>1;
            int max_i=-1;
            int max_val=-1;
            for(int i=0;i<m;i++){
                if(mat[i][mid]>max_val) {
                    max_i=i;
                    max_val= mat[i][mid];
                }
            }
           
            int left = mid>0 ? mat[max_i][mid-1]:-1;
            int right = mid<n-1?mat[max_i][mid+1]:-1;
            if( max_val>left && max_val>right){
                return {max_i,mid};
            }
            else if (max_val<left){
                 high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};