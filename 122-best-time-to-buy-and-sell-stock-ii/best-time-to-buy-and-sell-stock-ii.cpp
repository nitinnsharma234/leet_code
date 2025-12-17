class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp=prices[0];
        int sp=prices[0];
        int profit =0;
        for(int x : prices){
            if(x<=cp){
                cp=x;
                continue;
            }
           
                profit+=(x-cp);
                cp=x;
            
        }
        return profit ;

    }
};