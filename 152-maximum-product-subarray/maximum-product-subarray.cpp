class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // normally if a product is less than zero store it in diff var 
      int max_product, ans , min_product;
      ans =max_product=min_product=nums[0];
      for(int i =1;i<nums.size();i++){
        int temp = max_product;
        max_product = max ({nums[i],max_product*nums[i], min_product*nums[i]});
        min_product = min ({nums[i],nums[i]* temp, nums[i]*min_product});
        ans = max(ans,max_product);
      }
      return ans ;

    }
};