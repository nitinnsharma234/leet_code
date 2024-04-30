class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       bool  col_zero = false ;
       int rows=matrix.size();
       int cols = matrix[0].size();
       for (int i =0;i<rows;i++)
       {
        for (int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                 matrix[i][0]=0;
                 if(j!=0){
                  matrix[0][j]=0;
               
               }
               else{
                col_zero=true;
               }
               
            }
        }
       }
     
       for (int i =1;i<rows;i++){
        for (int j =1;j<cols;j++){
            if ( (matrix[0][j]==0|| matrix[i][0]==0)){
                    matrix[i][j]=0;
            }
            
        }
       }
    //      for (int i =0;i<rows;i++){
    //     for (int j =0;j<cols;j++){
    //         cout<<matrix[i][j]<<" ";}
    //         cout<<endl;
    //    }
        if(matrix[0][0]==0){
         for(int i=0;i<cols;i++){
            matrix[0][i]=0;
        }
       }
       if (col_zero){
        for(int i=0;i<rows;i++){
            matrix[i][0]=0;
        }
       }
      

    }
};

// 1 2 3 4 
// 5 0 7 8 
// 0 10 11 12
//13 1 15 0
