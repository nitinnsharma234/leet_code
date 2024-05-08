class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;

        if(s.size()==0){
            return 0;
        }
        int max_length=1;
        int start=0;
        

        for(int i =0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                while(start<=mp[s[i]]){
                    mp.erase(s[start]);
                    start++;
                }
            }
            mp[s[i]]=i;
            max_length=max(max_length,i-start+1);

            
        }
        return max_length;
    }
};