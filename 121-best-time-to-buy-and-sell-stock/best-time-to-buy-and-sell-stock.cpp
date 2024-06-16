class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int bp=prices[0];
        for(int i =1;i<prices.size();i++){
            if(prices[i]<bp){
                bp=prices[i];
            }
           // cout<<bp<<endl;
            ans=max(prices[i]-bp,ans);
        }
        return ans;
    }
};