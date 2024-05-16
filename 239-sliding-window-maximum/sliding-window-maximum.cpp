class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans ; 
        priority_queue<pair<int,int>> q ; 
        for (int i =0;i<nums.size();i++){
          pair<int,int> p ={nums[i],i};
            q.push(p);
              if(i>=k-1){
               while(i-q.top().second>=k){
                q.pop();
               }
               ans.push_back(q.top().first);
            }
        }
        return ans ;
        
    }
};