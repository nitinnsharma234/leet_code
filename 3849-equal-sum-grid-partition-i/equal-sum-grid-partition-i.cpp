class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size(); 
        int v_prefix=0, h_prefix=0;
        vector<long long>prefix(m*n+1,0);
         vector<long long >suffix(m*n+1,0);
        // vector<vector<int>>(m,vector<int>(n,0))pfxv;
            long long sum =0;
            int k=1;
        for(int i =0;i<m;i++){
                for(int j=0;j<n;j++){
                    sum+=grid[i][j];
                    prefix[k++]=sum;
                }
        }
       
        k=m*n-1;
        sum=0;
         for(int i =m-1;i>=0;i--){
                for(int j=n-1;j>=0;j--){
                    sum+=grid[i][j];

                   prefix[k]-=sum;
                
                   if(prefix[k]==0  && k%n==0)
                   {

                    return true;}
                    k--;

                }
        }
         k =1;
         sum=0;
          for(int i =0;i<n;i++){
                for(int j=0;j<m;j++){
                    sum+=grid[j][i];
                    suffix[k++]=sum;
                }
        }
       
         sum =0 ; 
         k = m*n-1;
          for(int i =n-1;i>=0;i--){
                for(int j=m-1;j>=0;j--){
                    sum+=grid[j][i];

                    suffix[k]-=sum;
                    if(k%m==0 && suffix[k]==0) return true;
                    k--;
                }
        }
        return false;
    }
};



// prefix sum based 
// prefix suffix if at any index suffix ==prefix then u can say itself this is actually 