class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,h=nums.size()-1;
        int ans=nums[0];
        while(s<h){
            int mid =(s+h)/2;
            if(nums[mid]>=nums[h] ){
                s=mid+1;
               

            }
         
            
            else{
                ans=nums[mid];
                h=mid;
            }
        }
        return nums[s];
    }
};

