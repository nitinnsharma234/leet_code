class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st ; 
        int n = num.size();
        for (int i =0;i<n;i++){
            int x = num[i]-'0';
            while(!st.empty() and st.top()>num[i] and k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(st.size()==1 and st.top()=='0'){
                st.pop();
            }
        }
        while(!st.empty() and k>0){
            k--;
            st.pop();
        }
        string ans ;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans==""?"0":ans;
    }
};