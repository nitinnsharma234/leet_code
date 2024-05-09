class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int, vector<int>, greater<int> > pq;
        for(auto x : happiness){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
            }
        }
        int count =0;
        long long ans =0;
        vector<int> x ;
        while(!pq.empty()){
            x.push_back(pq.top());
            pq.pop();
        }
        for(int i =x.size()-1;i>=0 ;i--){
            int a =x[i]-count<0?0:x[i]-count;
            ans+=a;
            count++;
        }
        
        
        return ans ;
    }
};