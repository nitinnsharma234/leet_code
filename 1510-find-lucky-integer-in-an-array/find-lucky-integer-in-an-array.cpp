class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(int x :arr){
            mp[x]++;
        }
        int ans =-1;
        for(auto y:mp){
            if(y.second==y.first){
                ans=max(ans, y.first);
            }
        }
        return ans;
    }
};