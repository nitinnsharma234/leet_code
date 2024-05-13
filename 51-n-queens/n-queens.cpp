class Solution {
public:

  

   void solve(int col , int m , vector<vector<string>>& soln,vector<string>&board,vector<int>&upperD,vector<int>&lowerD,vector<int> &cols){
    if (col==m){
        soln.push_back(board);
        return ;
    }
     for (int i =0;i<m;i++){
        if (cols[i]==0 and upperD[m-1+col-i]==0 and lowerD[col+i]==0){
                board[i][col]='Q';
                cols[i]=1;
                upperD[m-1+col-i]=1;
                lowerD[col+i]=1;
                solve(col+1, m ,soln,board ,upperD,lowerD,cols);
                board[i][col]='.';
                lowerD[col+i]=0;
                cols[i]=0;
                upperD[m-1+col-i]=0;
       }
     }
   }
    vector<vector<string>> solveNQueens(int n) {
          string s (n,'.');
        vector<string> board(n,s); 
        vector<vector<string>> soln;
      
      
        for(int i =0;i<n;i++){
            board[i]=s;
        }
        vector<int>upperD(2*n-1,0);
        vector<int> lowerD(2*n-1,0);
        vector<int> cols(n,0);
        solve(0, n,soln, board,upperD,lowerD,cols);
        return soln;
        
    }
};