class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char,int> mp;
        for(char x : word){
            mp[x]++;
        }
        int res= word.size();
        for( auto &[_,a]:mp){
            int deleted = 0;
             for( auto &[_,b]:mp){
                if(b<a){
                    deleted+=b;
                }
               else if (b > a + k) {
                    deleted += b - (a + k);
                }
             }
             res=min(res,deleted);
        }
        return res;
    }
};

