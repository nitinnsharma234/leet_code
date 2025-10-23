class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0,h=nums.size()-1;
        int ans=nums[0];
        while(s<=h){
            cout<<s<<" "<<h<<" "<<(s+h)/2<<endl;
            int mid =(s+h)/2;
            if(nums[mid]>nums[h] ){
                s=mid+1;
               

            }
            else if (nums[mid]<=nums[h] && nums[mid]>nums[nums.size()-1]){
                  s=mid+1;
            }
            
            else{
                ans=nums[mid];
                h=mid-1;
            }
        }
        return ans;
    }
};

/* l=0h=6 => 3   => 4,4*/