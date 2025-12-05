class Solution {
public:
    int countPartitions(vector<int>& nums) {
        //u need prefix subarray sum
        vector<int> prefix_sum ;
        int sum=0;
        prefix_sum.push_back(sum);
        for(int x : nums){
            sum+=x;
            prefix_sum.push_back(sum);
        }
        int count =0;
        int n= prefix_sum.size()-1;
        for(int i =1;i<nums.size();i++){
            //sum from o to i , 
            int sumY = prefix_sum[i];
            int sumX= prefix_sum[n]-sumY;
            if((sumX-sumY)%2==0){
                count++;
            }
        }
        return count;
    }
};