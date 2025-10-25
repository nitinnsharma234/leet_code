class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
       int low=0;int high=nums.size()-1;
       int mid;
       while(low<=high){
         mid = (low+high)/2;
        int l1=mid-low+1;
        int l2 =high-mid+1;
        if(mid>0 && nums[mid]==nums[mid-1]){
            if(mid%2==1){
                low=mid+1;
            } 
            else{
                high=mid-1;
            }
        }
        else if (mid<nums.size()-1 && nums[mid]==nums[mid+1]){
  if(mid%2==1){
                high=mid-1;
            } 
            else{
                    low=mid+1;
            }   
        }
        else{
            return nums[mid];
        }

       }
       return -1;
    }


//0 log(n)
};