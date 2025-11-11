class Solution {
public:

    int findMax(vector<string>& strs,int i , int m , int n , int b,int a , vector<vector<vector<int>>> &dp){
        if(i>=strs.size()){
            return 0 ;
        }
        if (dp[i][a][b] != -1) return dp[i][a][b];
        int zeroesCount=0;
        int onesCount=0;
        for(int j =0;j<strs[i].size();j++){
            int x = strs[i][j]-'0';
            x==1?onesCount++:zeroesCount++;
        }
        int p2 =findMax(strs,i+1,m,n,b,a,dp);

        int p1=0;
        if(onesCount+b<=n &&  zeroesCount+a<=m){
            p1 =1+findMax(strs,i+1,m,n,onesCount+b,zeroesCount+a,dp);
        }
        return dp[i][a][b]= max(p1,p2);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
         vector<vector<vector<int>>> dp(strs.size(), vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));
       return findMax(strs,0,m,n,0,0,dp);
    }
};