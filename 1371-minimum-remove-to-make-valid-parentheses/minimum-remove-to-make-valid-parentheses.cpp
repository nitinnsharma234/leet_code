class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack <pair<char,int>> st ;
        string ans;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.top().first=='(' and s[i]==')'){
                st.pop();
            }else if (s[i]=='(' || s[i]==')'){
                st.push({s[i],i});
            }
            ans+=s[i];
            
        }
      
        while(!st.empty()){
            int idx=st.top().second;

            st.pop();

            ans.erase(ans.begin()+idx,ans.length()==1?ans.end():ans.begin()+idx+1);

        }
        return ans;
    }
};