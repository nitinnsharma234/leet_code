class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> m1;
        for (int x : nums) {
            m1[x]++;
        }
        int length = 0;
        int curr_el=-2;
        int ans =0;
        for (auto& [key, val] : m1) {

            if(key==curr_el+1){
                length++;
            }
            else{
                
                length=1;
            }
            curr_el=key;
            ans=max(length,ans);
        }
        return ans;
    }
};