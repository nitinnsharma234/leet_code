class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
    
        int r = rowSum.size();
        int c = colSum.size();

       vector<vector<int>> ans(r,vector<int>(c)); 
       vector<int> rSum(r,0); // 0 0 0 
       vector<int> cSum(c,0); // 0 0 0 
       int sum=0;
       for (int i =0;i<r;i++){
        sum=0;
        for (int j =0; j<c ; j++){
            ans[i][j]= min (rowSum[i]-sum,colSum[j]-cSum[j]);
            sum+=ans[i][j];
            rSum[i]=ans[i][j];
            cSum[j]+=rSum[i];
        }
       }
       return ans;
    }
};

