class Solution {
    vector<int> dir ={0,1,0,-1,0};

public:
    bool traverse(int i , int j , int p,vector<vector<char>>& board, string word,vector<vector<int>>& vis){

        if (i<0 or i>=board.size() or j<0 or j>= board[0].size()  ) return false;
        if(vis[i][j]== 1){
            return false;
        }

        if (word[p]!=board[i][j]){
            return false;
        }
       // cout<<word[p]<<" "<<p<<" "<<i<<" "<<j<<endl;

        if(p==word.size()-1){
            //cout<<"Yes";
            return true;
        }

        vis[i][j]=1;
        for(int k =0;k<4;k++){
            int dx = i+dir[k];
            int dy =j+dir[k+1];

            bool a = traverse(dx,dy,p+1,board,word,vis);
            if(a) return true;

        }
            vis[i][j]=-1;

        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int r = board.size(); 
        int c = board[0].size();
        vector<vector<int>> vis (r,vector<int>(c,0));
        for(int i =0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
               bool a = traverse(i,j,0,board,word,vis);
               if(a) return true;
            }
        }
        return false;
    }
};