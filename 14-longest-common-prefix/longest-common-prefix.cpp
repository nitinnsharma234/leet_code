class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        if (strs.size()==0){
            return ans;
        }
        int j=0;
        while(j<strs[0].size())
        {
            char c = strs[0][j];

        for(int i=1;i<strs.size();i++)
        {
            if(j>strs[i].length()){
                return ans;
            }
            if(c!=strs[i][j]){
                    return ans;
            }
            
        }
        ans+=c;
        j++;
        }
        return ans ;
    }
};