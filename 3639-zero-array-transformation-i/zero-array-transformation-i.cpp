class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diff(nums.size()+1,0); 
        for (int i =0;i<queries.size(); i++)
        {
            int s = queries[i][0];
            int e= queries[i][1];
            diff[s]-=1;
            diff[e+1]+=1;
        }
        vector<int> sun;
        int sum =0;
        for (int x :diff){
            sum+=x;
           sun.push_back(sum);

        }
         
        for (int i=0;i<nums.size();i++){
            // cout<<sun[i]<<" "<<nums[i]<<endl;
            if(nums[i]+sun[i]>0){
                return false;
            }
        }
        return true;
       
    }
};