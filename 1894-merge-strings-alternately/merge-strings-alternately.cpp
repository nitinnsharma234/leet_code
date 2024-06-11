class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // again two pointer 
        int i =0; int j =0;
        string ans;
        while(i<word1.size() and j<word2.size()){
            ans+=word1[i++];
            ans+=word2[j++];
        }
        ans+=word1.substr(i,word1.size());
        ans+=word2.substr(j,word2.size());
            return ans ;
    }
};