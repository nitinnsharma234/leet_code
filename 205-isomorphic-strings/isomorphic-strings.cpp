class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> freq,freq2;

        for(int i =0;i<s.size();i++){
            if(freq.count(s[i])  || freq2.count(t[i]) ){

                if(freq[s[i]]!=t[i] || freq2[t[i]]!=s[i]){
                    return false;
                }
                
                continue;
            }
           

            freq[s[i]]=t[i];
            freq2[t[i]]=s[i];

           

        }
        return true;
        
         
    }
};