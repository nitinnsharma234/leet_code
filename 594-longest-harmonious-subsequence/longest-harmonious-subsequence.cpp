class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp ;
        for(auto x :nums){
            mp[x]++;
        }
        int ans =0;
        for(auto x : mp){
            int y=x.first;
            if(mp.count(y+1)!=0){
               ans = max(ans,x.second+mp[y+1] );
            }

        }
        return ans;
    }
};