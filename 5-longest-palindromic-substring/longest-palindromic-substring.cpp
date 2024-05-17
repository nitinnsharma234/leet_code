class Solution {
public:

    string expand(int i , int j,string s){
        int left =i;
        int right=j;
        while(left>=0 and right<s.size() and s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1, right-left-1);
    }
    string longestPalindrome(string s) {
        string ans="";
        for (int i =0;i<s.size();i++){
            string odd = expand (i,i,s);
            if (ans.size()< odd.size()){
                ans =odd;
            }
            string even= expand(i,i+1,s);
             if (ans.size()<even.size()){
                ans =even;
            }
        }
            return ans ;

    }
};