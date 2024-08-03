class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       map<int,int> mp ={};
       for (auto x : target){
            mp[x]++;
       } 
       for(auto x : arr){
            if(mp.find(x)==mp.end()){
                return false;
            }
            else {
                mp[x]--;
                if(mp[x]==0){
                    mp.erase(x);
                }
            }
       }
       return true;
    }
};