class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(); 
        int col = matrix[0].size();
        bool rowZero=false;
        bool colZero=false;
        for (int i =0;i<row; i++){
            for (int j =0;j<col;j++){
                if (matrix[i][j]==0 ){
                    if(i==0){
                      rowZero=true;
                    }
                    else if (j==0){
                        colZero=true;
                    }
                   else{
                     matrix[i][0]=0;
                    matrix[0][j]=0;
                   }
                }
            }
        }
        if(matrix[0][0]==0){colZero=true;}
        for (int i=1; i<row;i++){
            for (int j=1;j<col;j++){
                if (matrix[i][0]==0){
                    matrix[i][j]=0;
                }
                if (matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(rowZero){
            for (int i =0;i<col;i++){
                matrix[0][i]=0;
            }
        }
        if(colZero){
            for (int i =0;i<row;i++){
                matrix[i][0]=0;
            }
        }
        
    }
    
};

// 1 0 3 0 
// 0 0 7 8 
// 0 10 11 12
// 0 14 15 0 