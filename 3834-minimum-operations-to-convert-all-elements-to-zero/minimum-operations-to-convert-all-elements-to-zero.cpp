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
// i do think the solution would be to do all the unique non-zero elemenets
//count them and do it 
// and it should be in range o to o



//1 2 3 4 5 1