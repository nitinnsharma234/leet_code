class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ; 
        map<int,int> mp;
        for(auto x :nums1){
            mp[x]++;
        }
        for (auto y : nums2){
            if(mp.find(y)!=mp.end() and mp[y]>0){
                ans.push_back(y);
                mp[y]--;
            }
        }
        return ans ;
    }
};