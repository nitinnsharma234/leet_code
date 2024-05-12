class Solution {

public:

bool palindrome (string str ){
    int s =0; 
    int e = str.length()-1;
    while(s<e){
        if (str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void utils (string s , int idx,vector<string> &ans,vector<vector<string>>& vt ){
    if (idx == s.length()){
       
       for (string x : ans){
        
            if (!palindrome(x)){
                return ;
            }
       }
       vt.push_back(ans);
       cout<<endl;
    }
    string st ="";
    for ( int i =idx ; i< s.length(); i++){
        st+=s[i];
        ans.push_back(st);
        utils (s,i+1,ans, vt );
        ans.pop_back();
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans ;
        vector<string> ss;
        utils(s,0,ss,ans);
        return ans ;
    }
};

// i do think substring chahiye 
// palindrome 
// single piece palindrome 
// 