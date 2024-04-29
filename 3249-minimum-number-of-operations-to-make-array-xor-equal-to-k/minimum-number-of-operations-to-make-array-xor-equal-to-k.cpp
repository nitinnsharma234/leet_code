class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans =0;
        for(auto x : nums){
            ans^=x;
        }
        int count=0;
        while(k>0 or ans>0){
            int x =k&1;
            int y =ans&1;
            // cout<<x<<" "<<
            if(x!=y){
                count++;
            }
            k=k>>1;
            ans=ans>>1;
        }
        return count;
    }
        
};