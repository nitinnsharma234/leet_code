class Solution {
public:
int     count=0;
    void sortt(vector<int>& nums,int s ,int e)
    {   if(s>=e){
            return ;
        }
        int mid =(s+e)/2;
        sortt(nums,s,mid);
        sortt(nums,mid+1,e);
        int j=mid+1;
           for (int i = s; i <= mid; i++) {
            while (j <= e && nums[i] > nums[j] * 2LL)
                j++;
            count += j - (mid + 1);
        }
         j=mid+1;
        vector<int>vt;
        int k=0;
        int i=s;
      
        while(i<=mid && j<=e){
            if(nums[i]<nums[j]){
                vt.push_back(nums[i]);
                i++;
            }
            else{
               
                 vt.push_back(nums[j]);
                 j++;
            }
        }
        while(i<=mid){
               vt.push_back(nums[i]);
                i++;
        }
         while(j<=e){

               vt.push_back(nums[j]);
                j++;
        }

        for(int i=s;i<=e;i++){
            nums[i]=vt[k++];
        }
    }
    int reversePairs(vector<int>& nums) {
        int s=0; 
        int end = nums.size()-1;
        sortt(nums,0,end);
        return count;
    }
};