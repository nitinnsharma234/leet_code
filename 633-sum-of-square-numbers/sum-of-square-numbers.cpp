class Solution {
public:
    bool judgeSquareSum(int c) {
        
        set<int> st ;
        for(int i =0;i<=sqrt(c);i++){
            st.insert(i*i);
            if(st.count(c-(i*i))){
                return true;
            }
        }
       return false;
    }
};