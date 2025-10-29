class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j = 0;
        string ans = "";
        while (j<strs[0].size()) {
            
            char x = strs[0][j];
            for (int i = 1; i < strs.size(); i++) {
                if(x!=strs[i][j]){
                    return ans;
                }

            }
            ans+=x;
            j++;
        }
        return ans;
    }
};