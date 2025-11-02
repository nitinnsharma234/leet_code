class Solution {
public:
    pair<int,int> traverse(string s , int i , int j){
        while(i>=0 and j<=s.size()-1 and s[i]==s[j]){
            i--;
            j++;
        }
        return {i+1,j-1};
    }
    string longestPalindrome(string s) { 
        int max_len = 1;
        string ans="";
        ans+=s[0];

        for(int i =0;i<s.size();i++){
            pair<int,int> odd =  traverse (s,i,i);
            pair<int,int> even = traverse(s,i,i+1);
            int oddLen = odd.second-odd.first+1;
            int evenLen = even.second-even.first+1;

            if(oddLen>max_len){
                max_len=oddLen;
                ans = s.substr(odd.first,oddLen);
            }
            if (evenLen>max_len){
                max_len =evenLen;
                 ans = s.substr(even.first,evenLen);     
            }
        }
        return ans ;
     }
};