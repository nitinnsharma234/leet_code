class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> st ;
        bool flag =false; 
        string ans ;
        for (string x : dictionary){
            st.insert(x);
        }
        int n= sentence.size();
        for (int i=0;i<n;i++){
            string word ="";
            flag=false;
            while(i<n and sentence[i]!=' '){
              
                if (!flag ){
                      word+=sentence[i];
                    if (st.count(word)) flag=true;
                }
                i++;
            }
            ans +=word;
           if(i!=n){
             ans+=' ';
           }
        }
        return ans ;
    }
};