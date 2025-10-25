class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n=nums.size();
        int s=0;
        int end=n-1;
        int ans=-1;
        int mid;
        while(s<=end)
        {
            mid=(s+end)/2;
        if (nums[mid]==target)
        {
            return true;
        }
         if( (nums[s] == nums[mid]) && (nums[end] == nums[mid]) ) {++s; --end;}
            
        else if (nums[s]<=nums[mid]){
            
            if (target>=nums[s] and nums[mid]>=target)
            {
                 end=mid-1;

            }
            else{
                s=mid+1;

            }
            
        }
        else 
            
        {
            if (target>=nums[mid] and target<=nums[end]){
                s=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        }
        return false ;
    }

};