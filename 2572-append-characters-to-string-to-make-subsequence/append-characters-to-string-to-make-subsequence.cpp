class Solution {
public:
    int appendCharacters(string s, string t) {
        int l=0, k=0;
        int n =s.length(); 
        int m = t.length();

        while(l<n && k<m){
            if (s[l]==t[k]){
                k++;
            }
            l++;
        }
        return m-k;
    }
};