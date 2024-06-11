class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Map for storing last occured index of a character
        unordered_map<char,int> mp;
        int st=-1;
        int ans =0;
        for(int i =0;i<s.size();i++){
            char x = s[i];
            while(mp.find(x)!=mp.end() and st<mp[x]){
                st++;
            }
            // cout<<st<<" "<<x<<endl;
            mp[x]=i;
            ans =max(ans,i-st);
        }
        return ans ;

    }
};


//map--> i
// abcabcbb
// a=0