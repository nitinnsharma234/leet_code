class Solution {
public:
bool countPair(vector<int>& nums, int t,int p){
    int count=0;
    for(int i=0;i<nums.size()-1;i++){
        if(abs(nums[i]-nums[i+1])<=t){
            count++;
            i++;
        }
        if(count>=p){
            return true;
        }
    }
    return false;
}
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        if(p==0)return 0;
       int l =0,r= abs(nums[0]-nums[n]);
       while(l<=r){
        int mid = (l+r)/2;
        cout<<mid<<" mid<<"<<endl;
        bool pairCount = countPair(nums,mid,p);

        if(pairCount){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
       }
      
  
    return l;
    }
};

// pairs minimum difference ho
//max choose krna 
