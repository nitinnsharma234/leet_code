class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> triangle= {{1}};
        for(int i =1;i<n;i++){
            int size =i+1;
            triangle.push_back(vector<int>(size,1));
            for(int j=1;j<size-1;j++){
                triangle[i][j]= triangle[i-1][j-1]+ triangle[i-1][j];
            }
        }
        return triangle;
    }
};