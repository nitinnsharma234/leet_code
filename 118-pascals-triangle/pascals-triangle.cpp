class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vt ={{1}};
        // i=2
        for(int i=1;i<numRows;i++)
        {
            vector<int> temp(i+1,1);
            for(int j=1;j<=i-1;j++){
                temp[j]=vt[i-1][j-1]+vt[i-1][j];
            }
            vt.push_back(temp);
        }
    return vt;

    }
};