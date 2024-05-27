class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> st;
        int ans = -1 ; 
        int n= nums.size();
        for(int i =0;i<n;i++ ){
            int count =n-i;
            if(nums[i]>=count){
                if (i>0 and nums[i-1]>=count){
                    continue;
                }
                return count;
            }
            st.insert(nums[i]);

        }
        return -1;
    }
};