class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> p;
        for(int i = 0; i<names.size();i++){
            p.push_back({heights[i],names[i]});
        }
        vector<string> ans ;
        sort(p.begin(),p.end(),[](pair<int,string> a ,pair<int,string>b){
            return a.first>b.first;
        });
        for (auto x : p){
            ans.push_back(x.second);
        }
        return ans;
    }
};