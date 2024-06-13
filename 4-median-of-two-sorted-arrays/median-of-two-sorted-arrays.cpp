class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1,l2,r1,r2;
         int n =nums1.size();
        int m = nums2.size();
       cout<<n<<m<<endl;
        if(m<n){
            
            return findMedianSortedArrays(nums2,nums1);
        }
        l1=l2=INT_MIN;
        r1=r2=INT_MAX;
        int k =(n+m+1)/2;
        int low=0,high=n;
        while(low<=high){
            int mid1 =(low+high)>>1;
             l1=l2=INT_MIN;
        r1=r2=INT_MAX;

            int mid2=k-mid1;
            cout<<mid1<<mid2<<endl;
            if(mid1>0){
                l1=nums1[mid1-1];
            }
            if(mid2>0){l2=nums2[mid2-1];}
            if(mid1<n){r1=nums1[mid1];}
           if(mid2<m){r2=nums2[mid2];}
        cout<<l1<<" "<<l2<<" "<<r1<<" "<<r2<<endl;
            //cout<<m+n<<endl;
            if(l1<=r2 and l2<=r1){
                if((m+n)%2 == 1){
                    //cout<<"Yes";
                    return max(l1,l2)/1.0;
                }
                int x =max(l1,l2);
                int y =min(r1,r2);
                float ans =(x+y)/2.0;
               // cout<<ans;
                return ans;
            }
            else if (l1>r2 ){
                high=mid1-1;
            }
            else{
                low=mid1+1;
            }
        }
        return 0;
    }
};