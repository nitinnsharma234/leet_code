class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights.begin(), heights.end());
        sort(expected.begin(),expected.end());
        // sorted expeted array
        int count =0; 
        for (int i =0;i<heights.size(); i++){
            if(expected[i]!=heights[i]){
                count++;
            }
        }
        return count ;
    }
};
//increasing order 