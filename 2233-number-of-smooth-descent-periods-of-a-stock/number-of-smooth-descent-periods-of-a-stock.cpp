class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long  ans=1;
        int prev=prices[0];
        int len =1;

       for(int i =1;i<prices.size();i++){
        //  cout<<prev<<" "<<prices[i]<<endl;
            if(prices[i]-prev!=-1){
                len=1;
            }
            else{
               
                len++;
            }
           
             prev=prices[i];
            ans+=len;
       } 
       return ans;
    }
};