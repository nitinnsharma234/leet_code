class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st ; 
        int n = s.size();
        
        for(int i =0;i<n;i++){
            if (s[i]==')'){
              
                reverse(s.begin()+st.top(),s.begin()+i+1);
                  st.pop();
            }
            else if(s[i]=='('){
                st.push(i);
            }
        }
        string ans ;
        for(char x : s){
            if (x!=')' and x!='('){
                ans+=x;
            }
        }
        return ans;
    }
};