class Solution {
public:
    bool isValid(string s) {


        stack<int> st ; 
        for(int i =0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }
            else {
                // if you encouterd close bracket first
                if(st.empty()){
                    return false;
                }

                char c = st.top();
                if (s[i]==')' and c=='(' ||(s[i]==']' and c=='[') || (s[i]=='}' and c=='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
};