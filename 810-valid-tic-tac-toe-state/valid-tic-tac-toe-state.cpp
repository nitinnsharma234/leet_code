class Solution {
public:
typedef vector<string> vv;
    bool flag=true;
    char  isValidConfig (vv & board){
        int count =0;
        char c =board[0][0];
        char winner ='.';
        for (int i =0;i<3;i++){
           if(board[i]=="OOO" or board[i]=="XXX"){
            if(winner!='.' and winner!=board[i][0]){
                flag=false;
                return 'X';
            }
            winner= board[i][0];
           }
        }
        // 00 to nn 
       for (int i =0;i<3;i++){
            if(c==board[i][i])count++;
       }
       if(count==3){
          if(winner!='.' and winner!=c){
flag=false;
                return 'X';
            }
        winner= c;
       }
       c=board[0][2];
       count =0;
         for (int i =2;i>=0;i--){
            if(c==board[2-i][i])count++;
       }
        if(count==3){
             if(winner!='.' and winner!=c){
            flag=false;
                return 'X';
            }
        winner= c;
       }
       for (int i =0;i<3;i++){
        string s="";
        int j =0;
        for ( j=0;j<3;j++){
            s+=board[j][i];
        }
      // cout<<s<<" "<<winner<<endl;
        if(s=="OOO" or s=="XXX")
          {if(winner!='.' and winner!=board[j-1][i]){
           flag=false;
                return 'X';
            }
            winner=board[j-1][i];
          }
       }
        return winner;
    }
    bool validTicTacToe(vector<string>& board) {
        
        int countX =0;
        int countO=0;
        for (int i =0;i<3;i++){
            for (int j =0;j<3;j++){
               if( board[i][j]=='X')countX++;
               if(board[i][j]=='O')countO++;
            }
        }
        if (abs(countO-countX)>1 or countO>countX){
            return false;
        }
        if(countO+countX<=5){
            return true ;
        }
        char winner =isValidConfig(board);
        cout<<"Winner is "<<winner;
        if(!flag) return flag;
        if (winner!='.'){
            if( winner=='X')return countX>countO;
            if(winner=='O') return countX==countO;
        }
      

        return flag ;
    }
};