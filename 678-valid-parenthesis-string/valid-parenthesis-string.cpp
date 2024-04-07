class Solution {
public:
    bool checkValidString(string s) {
      stack<int> st;
      stack <int> it ; 
      for (int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else if (s[i]=='*'){
            it.push(i);
        }
        else {
            if(!st.empty()){
                st.pop();
            }
            else if(st.empty() and it.empty()){
                return false;
            }
            else{
                it.pop();
            }
        }
      }
      while(!st.empty() && !it.empty()){
        if(it.top()<st.top()){
            return false;
        }
        it.pop();
        st.pop();
      }
      return st.empty();
    }
};
// ***(((