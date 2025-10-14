class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int count =0; 
        int length =0 ;
        int l1 =1; 
        int l2 =0;

        for (int i =1;i<nums.size();i++){
            if((nums[i]>nums[i-1]) && l2==0){
                l1++;
            }
            else if(nums[i]>nums[i-1]){
                l2++;
            }
            else{
                if(l1<k && l2==0){
                    l1=1;
                }
                else if (l2<k && l2!=0){
                    l1=1;
                    l2=0;
                }
                else{
                    l2=1;
                }
            }
            if(l1>=2*k || (l1>=k && l2>=k)){
                return true;
            }
            cout<<l1<<" "<<l2 <<endl;
        }
            return false;
    }
};


