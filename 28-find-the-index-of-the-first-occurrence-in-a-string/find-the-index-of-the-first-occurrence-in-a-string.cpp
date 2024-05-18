class Solution {
public:
vector<int> LSP(string needle){
    vector<int> pi(needle.size(),0);
    int i =1;
    int n = needle.size() ; 
    int len =0;
    while(i<n)
    {
        if (needle[i]==needle[len]){
            len++;
            pi[i]=len;
            i++;
        }
        else{
            if(len!=0){
            len = pi[len-1];
        
            }
            else{
               // len=0;//
                pi[i]=0;
                i++;
            }
        }
        
    }
    return pi;
}
    int strStr(string s1, string s2) {
        vector<int>lsp =LSP(s2);
        int i =0, j=0;
        int n =s1.size() , m =s2.size();
        while((n-i>0) and (m-j>0)){
            if (s1[i]==s2[j]){
                i++;
                j++;
            }
             if (j == m) {
            cout<<"Found pattern at index %d "<<i-j;
            //j = lsp[j - 1];
            return i-j;
        }
             else if (i < n && s1[i] != s2[j]) {
           
            if (j != 0)
                j = lsp[j - 1];
            else
                i = i + 1;
        }
           
        }
        return -1;
    }
};