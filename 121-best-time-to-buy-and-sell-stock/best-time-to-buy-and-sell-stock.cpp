class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int bp=prices[0];
        for(auto x : prices ){
            bp=min(bp,x);
            ans =max (ans, x-bp);
        }
        return ans ;
    }
};
//brute force app
