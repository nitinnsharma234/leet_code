class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq; 

        for ( char x : s){
            freq[x]++;
        }
       vector<pair<int,char>> vt;
        for(auto &[key,val] : freq){
            vt.push_back({val,key});
        }
         sort(vt.begin(), vt.end(), [](pair<int,char>a, pair<int,char>b){
          return  a.first > b.first;
         });
         string ans="";
         for(auto x : vt){
            int k=x.first;
            while(k>0){
                ans+=x.second;
                k--;
            }
         }
         return ans;
    }
};