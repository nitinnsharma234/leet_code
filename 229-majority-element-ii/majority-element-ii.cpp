class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int el1(INT_MAX),el2(INT_MAX),cnt1(0),cnt2(0);
       vector<int> ans;
       for(int i=0;i<nums.size();i++){

            if(el1==nums[i]){
                    cnt1++;
            }
            else if(el2==nums[i]){
                    cnt2++;
            }
            else if (el2!=nums[i] and cnt1==0){
                    cnt1 =1;
                    el1=nums[i];
            }
            else if (el1!=nums[i] and cnt2==0) {
                cnt2=1;
                el2=nums[i];

            }
            else{
                cnt1--, cnt2--;
            }

       }
       cnt1=0;
       cnt2=0;
       for(auto x : nums){
        if (x==el1){
            cnt1++;
        }
        if(x==el2){
            cnt2++;
        }
       }
        if(cnt1>nums.size()/3)
      { ans.push_back(el1);}
        if(cnt2>nums.size()/3)
      { ans.push_back(el2);}
       return ans ;
    }
};

