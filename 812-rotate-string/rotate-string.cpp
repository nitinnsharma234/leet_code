class Solution {
public:
    bool rotateString(string s, string goal) {
        //if length inequality return false
        if(s.size()!=goal.size()) return false;
        //12345
       
        int n = s.size()-1;
        int i=0,j=0;
        while(i<=n){
            if(s[i]==goal[0]){
                int k =i;
                while(j<=n && s[k]==goal[j]){
                    j++;
                    k=(k+1)%(s.size());
                }
                if(j>n){
                    return true;
                }
                j=0;
            }
            i++;
        }
        return false;

    }
};