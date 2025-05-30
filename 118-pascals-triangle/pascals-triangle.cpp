class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> vt ={{1}};
      for (int i =1;i<numRows;i++){
        int j=0; 
        vector<int> temp;
        while (j<=i){
            if(j==0 || j==i){
                temp.push_back(1);
            }
            else{
                int x = vt[i-1][j]+vt[i-1][j-1];
                // int x =0;
                temp.push_back(x);

            }
            j++;
        }
            vt.push_back(temp);

      }
      return vt;
    }
};