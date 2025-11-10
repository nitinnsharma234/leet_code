class Solution {
public:
    int minOperations(vector<int>& nums) {
       stack<int> st;
       int count=0;
       for(int i =0;i<nums.size();i++){
            int x =nums[i];
          
            while(!st.empty() && st.top()>x){
                st.pop();
            }
            if((!st.empty() && st.top()==x) || x==0) continue;
            st.push(x);
            count++;
       }
       return count;
    }
};
