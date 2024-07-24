class Solution {
public:
    int mappedValue(vector<int>& mapping , int number ){
        if (number ==0 ) return mapping[0];
        int ans=0;
        stack<int> st ;
        while(number){
             int x = number%10;
             number/=10;
             st.push(mapping[x]);
            
        }
        while(!st.empty()){
             ans=(ans*10)+st.top();
             st.pop();
        }
        return ans ;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
       vector<pair<int,int>> mp ; 
       for(int x : nums){
            int y = mappedValue(mapping,x);
            mp.push_back({x,y });
       }
    //    for(auto y : mp){
    //         cout<<y.second<<" ";
    //    }
       sort(mp.begin(),mp.end(),[](pair<int,int> a , pair<int, int> b){
        return a.second< b.second;
       });
       for(int i =0;i<nums.size();i++){
            nums[i]=mp[i].first;
       }
       return nums;
    }
};

// sorting logic 
