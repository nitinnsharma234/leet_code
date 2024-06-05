class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans ; 
        unordered_map<char,int> mp ; 
        unordered_map<char,int> mp2 ;
        for(int i =0;i<words[0].size();i++){
            mp[words[0][i]]++;
            // mp[words[0
        }
        
        int j =1;
        while(j<words.size()){
            for(int i=0;i<words[j].size();i++){
                char c = words[j][i];
           
                if(mp.find(c)!=mp.end()  and mp[c]>mp2[c]){
                    mp2[words[j][i]]++;
                }
                //mp2.clear();
            }
                mp=mp2;
                mp2.clear();
            j++;
        }
        for(auto it =mp.begin();it!=mp.end();it++){
            int time =it->second;
            char c = it->first;
            int j=0;
            while(j<time){
                string s="";
                s+=c;
                ans.push_back(s);
                j++;
            }
        }
        return ans ;
    }
};

// kind map refresher 

// map -> 2 l c o 
// map-> 3 c o