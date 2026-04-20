class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size()-1;
        int x = colors[n];
        int ans =-1;
        for(int i =0;i<n;i++){
            if (x!=colors[i]){
                ans=max(ans, n-i);
            }
        }
        
         for(int i =n;i>=0;i--){
            if (colors[0]!=colors[i]){
                ans=max(ans,i);
            }
        }
        return ans;
    }
};


