class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        int close =0;
        int st=0;
        string ans="";
        for(int i =0;i<s.size();i++){
            if(s[i]=='(' ){
               open++;
               
            }
            else{
                open--;

            }
            if(open==0){
                int len =i-st+1;
                // cout<<st<<" "<<i<<" "<<len<<endl;
                string sp = s.substr(st+1,len-2);
                ans+=sp;
                st=i+1;
            }

        }
        return ans;
    }
};