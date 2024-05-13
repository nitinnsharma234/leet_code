class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {


        // row modification 
        // first element 0 hai to hi krega 
        int r =grid.size();
        int c=grid[0].size()-1;
        for (int i =0;i<grid.size();i++){
            if (grid[i][0]==0){
                //flipping the row 
                for(int j=0;j<grid[i].size();j++){
                    grid[i][j]=!grid[i][j];
                }
            }
        }
        int sum =0;
        for(int i =0;i<grid[0].size();i++){
            int count_one =0;
            for (int j=0;j<grid.size();j++){
                    if (grid[j][i]==1){
                        count_one++;
                    }
            }
            int a =max((pow(2,c-i)*count_one),pow(2,c-i)*(r-count_one));
            cout<<a<<" ";
            sum+=a;
        }

        return sum;
    }
};
