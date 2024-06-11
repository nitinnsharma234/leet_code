class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
      vector<int> leftSum(n,0);
    //   vector<int>rightSum(n,0) ;
      leftSum[0]=height[0];
    //   rightSum[n-1]=height[n-1];
      for (int i =1 ;i<n;i++){
        leftSum[i]=max(height[i],leftSum[i-1]);
      }
      int x = height[n-1];
      int trappedWater=0;

      for (int i =n-2 ;i>=0;i--){
        if(height[i]>x){
            x=height[i];
            continue;
        }
        trappedWater+=(min(leftSum[i],x)-height[i]);
        
      }
    //   for(int i =1;i<n-1;i++){
    //     trappedWater+=(min(leftSum[i],rightSum[i])-height[i]);
    //   }
      return trappedWater;
    }
};


